// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Animal.hh"
#include "Carnivorous.hh"
#include "Herbivorous.hh"

TEST_CASE("1: Animal Creation")
{
	std::string nameC = "TRex", nameH = "Diplo";
	Carnivorous a(nameC);
	Herbivorous b(nameH);
	REQUIRE(a.getName() == nameC);
 	REQUIRE(b.getName() == nameH);
}

TEST_CASE("2 : Food Test"){
	std::string nameC = "TRex", nameH = "Diplo";
	Carnivorous a(nameC);
	Herbivorous b(nameH);
	REQUIRE(a.getName() == nameC);
 	REQUIRE(b.getName() == nameH);
	REQUIRE(a.food(0) == 1); 	// giving meat
	REQUIRE(a.food(1) == 0);	// giving vegetables
	REQUIRE(b.food(0) == 0); 	// giving meat
	REQUIRE(b.food(1) == 1);	// giving vegetables
}