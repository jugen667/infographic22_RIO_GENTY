#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <string>

class Animal {
	private :	
		std::string _name;
        size_t _life;
	public :
        Animal(){};
		Animal(std::string name) : _name(name) {};
        Animal(std::string name, size_t fd) : _name(name), _life(fd){};
        //virtual int food const (int f){};
        std::string getName(){return this->_name;};
        size_t getLife(){return this->_life;};
        void setLife(int i){_life=i;}
        void addLife(int i){_life+=i;}
        void setName(std::string i){_name =i;};
}; 
