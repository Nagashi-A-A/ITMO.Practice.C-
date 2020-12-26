#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "item.h"
#include "trooper.h"
#include "itemFactory.h"
#include "enemy.h"
#include <vector>
#include <array>
#include <fstream>
#include <map>

using namespace std;
namespace Game
{
	class NewGame
	{
	public:
		static void startMyGame()
		{
			map<string, int>result;
			string ask;
			std::cout << "Do you want to play? \n";
			std::cin >> ask;

			while (ask == "y")
			{
					Player player = NewGame::create();
					int round = 1;
					int ch = 0;
					int levelDist = 200;
					int score = 0;
					vector<Enemy>epull;
					epull.push_back(GeneratorE::gen());

					while (player.health > 0)
					{
						std::cout <<player.name<<" : "<< player.health << "hp. New turn.\n";
						if (round % 3 == 0)
						{
							epull.push_back(GeneratorE::gen());
						}
						round++;

						std::cout << "Move(1) or shoot(2)?";
						cin >> ch;
						if (ch == 2)
						{
							if (!epull.empty())
							{
								player.attack(epull[0]);
								if (epull[0].health <= 0)
								{
									std::cout << epull[0].name << " is dead. 10 points to: " << player.name << "!\n";
									epull.pop_back();
									score += 10;
								}
							}
							else
								std::cout << "There is no enemy to shoot.\n";
						}

						else if (ch == 1)
						{
							if (!epull.empty())
							{
								for (Enemy e : epull)
								{
									e.attack(player);
								}
									epull[0].dist = epull[0].dist - player.speed - epull[0].speed;
									if (epull[0].dist <= 0)
								{
									player.health = 0;
								}
							}
							std::cout << "Checkpoint!\n";
							levelDist -= player.speed;

							if (levelDist <= 0)
							{
								score += 100;
								levelDist = 200;
								std::cout << "Your score: " << score << "! Next level.\n";
								epull.clear();
							}
						}
					}
					std::cout << "Game over! Your score is: \n";

					std::cout << player.name << " " << score << "\n";
					result.insert(std::pair<string, int>(player.name, score));
				//Save all results to the file and show them on the screen
				ofstream fileOut;

				fileOut.open("results.txt");
				for (auto it = result.begin(); it != result.end(); ++it)
				{
					fileOut << "Player: " << it->first << " Score: " << it->second << endl;
				}

				fileOut.close();

				string resText;
				ifstream fileIn;
				fileIn.open("results.txt");
				while (fileIn)
				{
					getline(fileIn, resText);
					cout << resText << endl;
				}
				fileIn.close();

				std::cout << "Do you want to play? \n";
				std::cin >> ask;
			}

		}

		static Player create()
		{
			string name;
			int choice;
			cout << "Choose name: ";
			std::cin >> name;
			Player player(name);
			cout << "\n Choose weapon (1. Rifle, 2. AK-12): ";
			cin >> choice;
			if (choice == 1)
			{
				Rifle w;
				player.equip(w, 0);
			}
			else if (choice == 2) 
			{
				AK12 w;
				player.equip(w, 0);
			}
			else
			{
				cout << "You will go into a fight without weapon. Run faster!" << endl;
			}

			cout << "\n Choose Armor (1. Heavy, 2. Light): ";
			cin >> choice;
			if (choice == 1)
			{
				ArmorHeavy ar;
					player.equip(ar, 1);
			}

			else if (choice == 2)
			{
				ArmorLight ar;
				player.equip(ar, 1);
			}

			else
			{
				cout << "You will go into a fight without armor." << endl;
			}

			player.Info();
			return player;
		}
	};
}

