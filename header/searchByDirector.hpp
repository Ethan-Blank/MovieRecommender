#ifndef __BY_DIR__
#define __BY_DIR__

#include "library.hpp"
#include "dbElement.hpp"
#include "searchRecommender.hpp"
//class Library;
//class dbElement;
class SearchByDirector : public SearchRecommender { 
	public: 
	std::vector<dbElement> recommend(Library*, std::string); 
};


#endif
