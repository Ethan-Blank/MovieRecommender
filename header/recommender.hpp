#ifndef __RECOMMENDER__
#define __RECOMMENDER__
#include "../header/dbElement.hpp"
#include "../header/library.hpp"
#include "../header/searchCriteria.hpp"
#include "../header/user.hpp"
#include <string>
#include <vector>

using namespace std;

class Recommender {
    private:
	vector<dbElement> sortByRating(vector<dbElement>);
	vector<dbElement> sortByPoints(vector<dbElement>, vector<int>);
	

    public:
	vector<dbElement> recByPreferences(Library*, user*);
	vector<dbElement> recByGenre(Library*, user*);
	
	vector<dbElement> recByDir(Library*, user*);
	/*
	void sortGenreList();
	void sortDirectorList();
	*/
};

#endif
