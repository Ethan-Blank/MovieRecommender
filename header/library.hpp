#ifndef __LIB_HPP__
#define __LIB_HPP__
#include "dbElement.hpp"
#include <vector>

using namespace std;

class Library {
	vector<dbElement> movies;
	// User u;
	// GUI g;
	
	public:
		Library(string);
		vector<dbElement> fileToData(string);
	
		dbElement searchByTitle(string);
		vector<dbElement> searchByGenre(string);
		vector<dbElement> searchByDirector(string);
		vector<dbElement> searchAboveRating(float);
		vector<dbElement> searchByYear(int);
		
};

#endif
