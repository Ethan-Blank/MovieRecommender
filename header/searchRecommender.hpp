#ifndef __SREC__
#define __SREC__

#include "library.hpp"
#include "dbElement.hpp"

class SearchRecommender {
	public:
		//virtual std::vector<dbElement> recommend(Library*, std::string, std::string) = 0;
		virtual std::vector<dbElement> recommend(Library*, std::string) = 0;
};

class searchByTitle : public SearchRecommender { 
	public:
		std::vector<dbElement> recommend(Library* l, std::string) {
				
		}
};


#endif
