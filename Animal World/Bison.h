#pragma once
#include "Herbivore.h"
#include <iostream>
using namespace std;
class Bison : public Herbivore
{
public:
	Bison() {};
	Bison(string n, int w, bool l) :Herbivore(n, w, l) {};
};

