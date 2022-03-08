#ifndef __LIB_HPP__
#define __LIB_HPP__
#include "dbElement.hpp"
#include <vector>

class Library {
	std::vector<dbElement> movies;
	// User u;
	// GUI g;
	
	public:
		Library(std::string);
		std::vector<dbElement> fileToData(std::string);	
		int searchByTitle(std::string);
		std::vector<dbElement> getDatabase();
};

#endif
