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
	Herbivore(string n, int w, bool l) :Animal(n) {};
	Herbivore() {};
	void Print();
	void EatGrass();
	int GetWeight();
};

