#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "Animal.hh"
#include "Carnivorous.hh"

class Herbivorous : public Animal {
	public :
        Herbivorous(std::string name) : Animal(name, 100) {};
        Herbivorous(Animal name) : Animal(name) {};
		int food(int f);
};


int Herbivorous::food(int f){
	if (f == 1){  // good food = vegetals
		return 1;
	}
	else {
		return 0;
	}
}
