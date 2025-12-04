#include "Herbivore.h"

Herbivore::Herbivore(int w, bool l, string n)
{
	weight = w;
	life = l;
	name = n;
}

void Herbivore::Print()
{
	Animal::Print();
	cout << "Weight: " << weight << endl;
	cout << "Life: " << life << endl;
}

void Herbivore::EatGrass()
{
	cout << "Eat grass" << endl;
	weight += 10;
}

int Herbivore::GetWeight()
{
	return weight;
}
