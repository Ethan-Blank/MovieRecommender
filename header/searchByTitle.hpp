#ifndef __BY_TITLE__
#define __BY_TITLE__

#include "library.hpp"
#include "dbElement.hpp"
#include "searchRecommender.hpp"
//class Library;
//class dbElement;
class SearchByTitle: public SearchRecommender { 
	public: 
	std::vector<dbElement> recommend(Library*, std::string); 
};


#endif
