#ifndef __LIB_HPP__
#define __LIB_HPP__
#include "dbElement.hpp"
#include "searchCriteria.hpp"
#include "user.hpp"
#include <vector>

using namespace std;
class UserRecommender;
class SearchRecommender;

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
    std::vector<dbElement> acceptUR(UserRecommender*, user*);
    std::vector<dbElement> acceptSR(SearchRecommender*, std::string);
};

#include "recommender.hpp"
#include "searchRecommender.hpp"
#endif
