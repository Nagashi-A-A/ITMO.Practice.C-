// ITMO.Cpp.Yaroshchuk.Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <vector>
#include <iostream>
#include <string>
#include "item.h"
#include "trooper.h"
#include "itemFactory.h"
#include "game.h"
#include "enemy.h"
#include <vector>
#include <array>
#include <fstream>

using namespace std;
using namespace Game;


int main()
{
    NewGame::startMyGame();
        return 0;
}

//Player create()
//{
//	string name;
//	int choice;
//	cout << "Choose name: ";
//	std::cin >> name;
//	Player player(name);
//	cout << "\n Choose weapon (1. Rifle, 2. AK-12, 3. Sabre): ";
//	cin >> choice;
//	if (choice <= 3 && choice > 0)
//	{
//		Rifle w1;
//		AK12 w2;
//		Sabre w3;
//
//		switch (choice)
//		{
//		case (1):
//			player.equip(w1, 0);
//		case (2):
//			player.equip(w2, 0);
//		case (3):
//			player.equip(w3, 0);
//		}
//	}
//
//	else
//	{
//		cout << "There is no such weapon." << endl;
//	}
//
//	cout << "\n Choose Armor (1. Heavy, 2. Light): ";
//	cin >> choice;
//	if (choice == 2 || choice == 1)
//	{
//		ArmorHeavy w1;
//		ArmorLight w2;
//
//		switch (choice)
//		{
//		case (1):
//			player.equip(w1, 1);
//		case (2):
//			player.equip(w2, 1);
//		}
//	}
//
//	else
//	{
//		cout << "You can't go into a fight without armor." << endl;
//	}
//
//	player.Info();
//	return player;
//}