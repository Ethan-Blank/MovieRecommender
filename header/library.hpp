#ifndef __LIB_HPP__
#define __LIB_HPP__
#include "dbElement.hpp"
#include "searchCriteria.hpp"
#include "user.hpp"
#include <vector>

class UserRecommender;
class SearchRecommender;
class Library {
	std::vector<dbElement> movies;
	// User u;
	// GUI g;
	
	public:
		Library(std::string);
		std::vector<dbElement> fileToData(std::string);	
		int searchByTitle(std::string);
		std::vector<dbElement> acceptUR(UserRecommender*, user*);
		std::vector<dbElement> acceptSR(SearchRecommender*, std::string);
};

#include "recommender.hpp"
#include "searchRecommender.hpp"
#endif
