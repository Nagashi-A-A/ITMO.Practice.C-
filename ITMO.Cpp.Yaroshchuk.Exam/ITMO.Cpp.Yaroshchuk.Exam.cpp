// ITMO.Cpp.Yaroshchuk.Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.

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

using namespace std;
Player create();

int main()
{
	int cScore[5];
	string cPlayers[5];
	for (int i = 0; i < 5; i++)
	{
		Player player = create();
		int round = 1;
		int ch = 0;
		int levelDist = 2000;
		int score = 0;
		cPlayers[i] = player.name;
		vector<Enemy>epull;
		epull.push_back(GeneratorE::gen());

		while (player.health > 0)
		{
			std::cout << player.health << "New turn Loop check\n";
			if (round % 3 == 0)
			{
				epull.push_back(GeneratorE::gen());
			}
			round++;

			std::cout << "Move(1) or shoot(2)?";
			cin >> ch;
			if (ch == 2)
			{
				if (epull.empty() != true)
				{
					player.attack(epull[0]);
					if (epull[0].health <= 0)
					{
						epull.pop_back();
						score += 10;
						std::cout << epull[0].name << " is dead. 10 points to: " << player.name << "!\n";
					}
				}
			}

			else if (ch == 1)
			{
				if (epull.empty() != true)
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
				std::cout << "checkpoint!\n";
				levelDist -= player.speed;

				if (levelDist <= 0)
				{
					score += 1000;
					levelDist = 2000;
					std::cout << "Your score: " << score << "! Next level.\n";
					epull.clear();
				}
			}
		}
		std::cout << "Game over! Your score is: " << score << endl;

		std::cout << player.name << " " << score;
		cScore[i] = score;
	}
		//Save all results to the file and show them on the screen
		ofstream fileOut;

		fileOut.open("results.txt");
		for(int i = 0; i < 5; i++)
		{
			fileOut << "Player: " << cPlayers[i] << " Score: " << cScore[i];
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

        return 0;
}

Player create()
{
	string name;
	int choice;
	cout << "Choose name: ";
	std::cin >> name;
	Player player(name);
	cout << "\n Choose weapon (1. Rifle, 2. AK-12, 3. Sabre): ";
	cin >> choice;
	if (choice <= 3 && choice > 0)
	{
		Rifle w1;
		AK12 w2;
		Sabre w3;

		switch (choice)
		{
		case (1):
			player.equip(w1, 0);
		case (2):
			player.equip(w2, 0);
		case (3):
			player.equip(w3, 0);
		}
	}

	else
	{
		cout << "There is no such weapon." << endl;
	}

	cout << "\n Choose Armor (1. Heavy, 2. Light): ";
	cin >> choice;
	if (choice == 2 || choice == 1)
	{
		ArmorHeavy w1;
		ArmorLight w2;

		switch (choice)
		{
		case (1):
			player.equip(w1, 1);
		case (2):
			player.equip(w2, 1);
		}
	}

	else
	{
		cout << "You can't go into a fight without armor." << endl;
	}

	player.Info();
	return player;
}

//void fight(Player &p, std::vector<Enemy> &v, int &score)
//{
//	v[0].health -= p.attack();
//	if (v[0].health <= 0)
//	{
//		score += 10;
//		v.pop_back();
//	}
//
//
//	for (Enemy e : v)
//	{
//		p.health -= e.attack();
//		std::cout << "Player hp: " << p.health << "\n";
//	}
//}