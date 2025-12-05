#pragma once
#include "Carnivores.h"
#include <iostream>
using namespace std;
class Lion: public Carnivores
{
public:
	Lion() {};
	Lion(string n, int p) :Carnivores(n, p) {};
};

