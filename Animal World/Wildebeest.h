#pragma once
#include "Herbivore.h"
#include <iostream>
using namespace std;
class Wildebeest: Herbivore
{
public:
	Wildebeest() {};
	Wildebeest(string n, int w, bool l) :Herbivore(n,w,l) {};
};

