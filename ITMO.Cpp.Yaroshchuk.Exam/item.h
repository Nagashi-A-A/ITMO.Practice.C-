#pragma once
#include <iostream>
#include <string>
using namespace std;

class Item
{
	public:
		int durability = 10;
		int weight = 0;
		int damage = 0;
		int prot = 0;
		string name = "";

		Item() {}
		Item(string n, int w, int d, int p) 
		{
			this->name = n;
			this->prot = p;
			this->damage = d;
			this->weight = w;
		}

		void setN(string n)
		{
			this->name = n;
		}

		void setW(int w)
		{
			this->weight = w;
		}

		void setD(int d)
		{
			this->damage = d;
		}

		void setP(int p)
		{
			this->prot = p;
		}

		void useItem()
		{
			durability--;
			if (durability == 0)
			{
				cout << name << " is broken." << endl;
				prot = 0;
				damage = 0;
			}
		}
};
