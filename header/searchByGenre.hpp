#ifndef __BY_GENRE__
#define __BY_GENRE__

#include "library.hpp"
#include "dbElement.hpp"
#include "searchRecommender.hpp"
//class Library;
//class dbElement;
class SearchByGenre : public SearchRecommender { 
	public: 
	std::vector<dbElement> recommend(Library*, std::string); 
};


#endif
