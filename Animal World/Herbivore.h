#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Animal.h"
class Herbivore : public Animal
{
	int weight;
	bool life;
public:
	Herbivore(int w, bool l, string n) :Animal(n) {};
	Herbivore() {};
	void Print();
	void EatGrass();
	int GetWeight();
};

