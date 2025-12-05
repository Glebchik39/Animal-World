#include "Animal.h"
#include "Herbivore.h"
#include <string>
using namespace std;

#pragma once
class Carnivores : public Animal
{
	int power;
public:
	Carnivores() = default;
	Carnivores(string n,int p);
	void Eat(Herbivore & obj);
};

