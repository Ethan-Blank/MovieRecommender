#ifndef __LIB_HPP__
#define __LIB_HPP__
#include "dbElement.hpp"
#include "searchCriteria.hpp"
#include "user.hpp"
#include <vector>

class Recommender;
class UserRecommender;
class Library {
	std::vector<dbElement> movies;
	// User u;
	// GUI g;
	
	public:
		Library(std::string);
		std::vector<dbElement> fileToData(std::string);	
		int searchByTitle(std::string);
		std::vector<dbElement> acceptUR(UserRecommender*, user*);
		std::vector<dbElement> acceptSR(Recommender*, std::string, std::string);
};

#include "recommender.hpp"
#endif
