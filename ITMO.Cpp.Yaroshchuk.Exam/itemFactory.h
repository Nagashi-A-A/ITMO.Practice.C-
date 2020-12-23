#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "item.h"
#include "trooper.h"
using namespace std;

class Rifle:public Item
{
	public:
	int clip = 10;
	const int fireRate = 3;
	const int range = 1200;


	Rifle():Item()
	{
		setN("Rifle");
		setW(5);
		setD(30);
	}
};

class AK12:public Item
{
public:
	int clip = 30;
	const int fireRate = 11;
	const int range = 800;

	AK12():Item()
	{
		setN("AK-12");
		setW(3);
		setD(10);
	}
};

class Sabre:public Item
{
public:
	int prot = 0;
	Sabre():Item()
	{
		setN("Sabre");
		setW(2);
		setD(50);
		setP(20);
	}
};

class ArmorLight:public Item
{
public:
	ArmorLight():Item()
	{	
		setN("Light");
		setP(10);
		setW(5);
	}
};

class ArmorHeavy:public Item
{
public:
	ArmorHeavy() :Item()
	{
		setN("Heavy");
		setP(25);
		setW(15);
	}
};

//class ItemFactory
//{
//public:
//	virtual AK12* createAK() = 0;
//	virtual Sable* createSable() = 0;
//	virtual Rifle* createRifle() = 0;
//	virtual ArmorHeavy* createArmH() = 0;
//	virtual ArmorLight* createArmL() = 0;
//	virtual ~ItemFactory() {}
//};


//class Armory : public ItemFactory
//{
//public:
//
//	AK12* createAK()
//	{
//		return new AK12;
//	}
//	virtual Sable* createSable()
//	{
//		return new Sable;
//	}
//	virtual Rifle* createRifle()
//	{
//		return new Rifle;
//	}
//	virtual ArmorHeavy* createArmH()
//	{
//		return new ArmorHeavy;
//	}
//	virtual ArmorLight* createArmL()
//	{
//		return new ArmorLight;
//	}
//};