#include "Animal.h"
#include "Herbivore.h"
#include <string>
using namespace std;

#pragma once
class Carnivores : public Animal
{
	int power;
public:
	Carnivores(int p, string n) :Animal(n) {};
	void Eat(Herbivore & obj);
};

