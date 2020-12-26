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
	Rifle():Item()
	{
		setN("Rifle");
		setW(10);
		setD(30);
	}
};

class AK12:public Item
{
public:

	AK12():Item()
	{
		setN("AK-12");
		setW(5);
		setD(10);
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
