#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "Animal.hh"
#include "Herbivorous.hh"

class Carnivorous : public Animal {
	public :
        Carnivorous(std::string name) : Animal(name,100) {};
        Carnivorous(Animal name) : Animal(name) {};
		int food(int f);
};


int Carnivorous::food(int f){
	if (f == 0){ // good food = meat
		return 1;
	}
	else {
		return 0;
	}
}

