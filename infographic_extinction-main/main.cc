#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "CSVReader.hh"
#include "Specie.hh"

int main(){

	// bool for continents
	bool Africa = false, Europe = false, America = false, Oceania = false, Asia = false;

	// bool category
	bool Birds = false, Mammals = false, Fish = false, Reptiles = false, Amphibians = false;


	std::string Decades = "All";


	Europe = true;
	Birds = true;

	// America = true;
	// Mammals = true;

	// reading the CSV file (c.f. CSVReader.hh)
	std::vector<std::vector<std::string>> readingList;
	readingList = CSVReading();

	//temporary list used for sorting 
	std::vector<std::vector<std::string>> contSortList;
	std::vector<std::vector<std::string>> catSortList;
	std::vector<std::vector<std::string>> dateSortList;

	
	// creating the container of species	
	std::vector<Specie> activeListSpecie;
	
	// for update
	while(1){
        bool contSort;
        bool catSort;
		activeListSpecie.clear();
		contSortList.clear();
		catSortList.clear();
		dateSortList.clear();
		// flag to check if there is a sorting occuring 
		contSort = Europe or Africa or America or Oceania or Asia;
		catSort = Birds or Mammals or Reptiles or Amphibians or Fish;
		
		// continent sort (first for starting at 1 to be sure to not take the header of the csv file)
		for(size_t i = 1; i < readingList.size(); i++){
			// if sorted only for a specified continent => send it 
			if(contSort){
				if(Africa && readingList[i][5] == "Africa"){
					contSortList.push_back(readingList[i]);
				}
				else if(America && (readingList[i][5] == "North America" || readingList[i][5] == "South America")){
					contSortList.push_back(readingList[i]);
				}	
				else if(Europe && readingList[i][5] == "Europe"){
					contSortList.push_back(readingList[i]);
				}
				else if(Asia && readingList[i][5] == "Asia"){
					contSortList.push_back(readingList[i]);
				}
				else if(Oceania && readingList[i][5] == "Oceania"){
					contSortList.push_back(readingList[i]);
				}
				else{
					continue;
				}
			}
			// if no sorting specified, put it anyway 
			else{
			 	contSortList.push_back(readingList[i]);
			}
		}

		// category sorting
		for(size_t i = 0; i < contSortList.size(); i++){
			// if sorted only for a specified category => send it 
			if(catSort){
				if(Birds && contSortList[i][6] == "Birds"){
					catSortList.push_back(contSortList[i]);
				}
				else if(Mammals && contSortList[i][6] == "Mammals"){
					catSortList.push_back(contSortList[i]);
				}	
				else if(Amphibians && contSortList[i][6] == "Amphibians"){
					catSortList.push_back(contSortList[i]);
				}
				else if(Fish && contSortList[i][6] == "Fish"){
					catSortList.push_back(contSortList[i]);
				}
				else if(Reptiles && contSortList[i][6] == "Reptiles"){
					catSortList.push_back(contSortList[i]);
				}
				else{
					continue;
				}
			}
			// if no sorting specified, put it anyway 
			else{
			 	catSortList.push_back(contSortList[i]);
			}
		}

		for (size_t i = 0; i < catSortList.size(); i++){
			if(Decades == catSortList[i][3]){
				dateSortList.push_back(catSortList[i]);
			}
			else if (Decades == "All"){
				dateSortList.push_back(catSortList[i]);
			}
		}


		// list of species
		for(size_t i = 0; i<dateSortList.size(); i++){
			Specie x(dateSortList[i][0], dateSortList[i][1], dateSortList[i][2], dateSortList[i][3], dateSortList[i][4], dateSortList[i][5], dateSortList[i][6]);
			activeListSpecie.push_back(x);
		}

		//printing species for debugging
		for(size_t j =0; j<activeListSpecie.size(); j++){
			std::cout << activeListSpecie[j];	
		}

		//waiting for input
		std::cout << '\n' << "List created\nPlease press Enter to continue or Ctrl+C to exit\n";
		getchar();
	}
};

