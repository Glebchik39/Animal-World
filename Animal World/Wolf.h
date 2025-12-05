#pragma once
#include "Carnivores.h"
#include <iostream>
using namespace std;
class Wolf: public Carnivores
{
public:
	Wolf() {};
	Wolf(string n, int p):Carnivores(n,p){}
};

