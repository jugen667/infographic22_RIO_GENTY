#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <string>

class Specie {

	private :
		std::string _common_name;
		std::string _scientific_name;
		std::string _ext_date;
		std::string _decade;
		std::string _place;
		std::string _continent;
		std::string _type;
        //friend std::ostream& operator<< (std::ostream& stream, const Specie& Specie);
	public :
		Specie(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5, std::string s6, std::string s7):
			_common_name(s1), _scientific_name(s2), _ext_date(s3), _decade(s4), _place(s5), _continent(s6), _type(s7){};
		// Specie(const Specie & Sp);
		std::string returnCategory() const {return this->_type;};
		std::string returnExtDate() const {return this->_ext_date;};
		std::string returnCommonName() const {return this->_common_name;};
		std::string returnExtDecade() const {return this->_decade;};
		std::string returnContinent() const {return this->_continent;};
		std::string returnLocation() const {return this->_place;};
		std::string returnScientName() const {return this->_scientific_name;};
};


/*overload of specie fct is not allowed by qt
 * std::ostream& operator<< (std::ostream& stream, const Specie& Specie) {
	stream << Specie.returnCommonName() << ' ' << Specie.returnScientName() 
		<< ' ' << Specie.returnExtDate() << ' ' << Specie.returnExtDecade() << ' ' << Specie.returnLocation() 
		<< ' ' << Specie.returnContinent() << ' ' << Specie.returnCategory() << '\n';
	return stream;
}*/
