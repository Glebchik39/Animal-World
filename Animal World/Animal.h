#include <iostream>
#include <string>
using namespace std;

#pragma once
class Animal
{
protected:
	string name;
public:
	Animal(string n);
	Animal() {};
	void Print();
};

