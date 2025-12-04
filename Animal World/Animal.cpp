#include "Animal.h"

Animal::Animal(string n)
{
	name = n;
}

void Animal::Print()
{
	cout << "Name: " << name << endl;
}
