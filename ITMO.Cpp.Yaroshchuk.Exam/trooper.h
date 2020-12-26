#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "item.h"


class Trooper
	{
	public:
		string name = "Trooper";
		int damage = 0;
	
		Trooper() {}
		Trooper(int d)
		{
			this->damage = d;
		}

		Trooper(string n, int d) 
		{
			this->name = n;
			this->damage = d;
		}

		void setDamage(int d)
		{
			this->damage = d;
		}

		void setName(string n)
		{
			this->name = n;
		}
		//Function prototype
		template<class T>
		void attack(T &t)
		{
			srand(time(NULL));
			int diceRoll;
			diceRoll = rand() % 6 + 1;
			if (diceRoll > 2)
			{
				diceRoll = damage + diceRoll - t.armor;
				t.health = t.health - diceRoll;
				cout << name << ". shoot "<<t.name <<" for "<< diceRoll<< " damage!\n";
			}
		}

		/*~Trooper()
		{
			std::cout << name << " is dead." << endl;
		}*/
	};

	class Player :public Trooper
	{
	public:
		Item inventory[2];
		int health = 50;
		int speed = 70;
		int armor = 0;

		Player() {}
		Player(string name):Trooper(name, 0)
		{
		}

		void setSpeed(int s)
		{
			this->speed = s;
		}

		void setArmor(int a)
		{
			this->armor = a;
		}
		//Another prototype for variety of objects
		template<class T>
		void equip(T it, int i)
		{
			this->inventory[i] = it;
			setSpeed(speed -= it.weight);
			setDamage(damage + it.damage);
			setArmor(armor + it.prot);
		}

		/*void pAttack(Enemy &t)
		{
			srand(time(NULL));
			int diceRoll;
			diceRoll = rand() % 6 + 1;
			inventory[0].useItem();
			if (diceRoll > 2)
			{
				t.health = t.health - inventory[0].damage;
				std::cout << name << ". Good shot! " << damage << " damage!\n";
			}
		}*/

		void Info()
		{
			std::cout << name << "\n";
			std::cout << "Weapon: " << inventory[0].name << "\n";
			std::cout << "Health: " << health
				<< "\nArmor: " << inventory[1].prot << " points."
				<< "Movement speed: " << speed << "m. per round." << endl;
		}
	};

	class Enemy:public Trooper
	{
	public:
		int dist = 1000;
		int health;
		int speed;

		int armor = 0;

		//Enemy() {}
		Enemy(int h, int s, int d):Trooper(d)
		{
			this->speed = s;
			this->health = h;
			setName("Enemy Soldier");
		}

	};

	//Enemy units generator
	class GeneratorE
	{
	public:

		static Enemy gen()
		{
			int diceRoll;
			srand(time(NULL));
			diceRoll = rand() % 6 + 1;

			Enemy e(diceRoll * 5, diceRoll * 10, diceRoll + 25);
			return e;
		}
	};