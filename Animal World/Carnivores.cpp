#include "Carnivores.h"
#include "Herbivore.h"

Carnivores::Carnivores(string n, int p)
{
	name = n;
	power = p;
}


void Carnivores::Eat(Herbivore& obj)
{
	if (power > obj.GetWeight())
	{
		power += 10;
	}
	else
	{
		power -= 10;
	}
}


