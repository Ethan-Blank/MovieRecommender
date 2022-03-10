#ifndef __SREC__
#define __SREC__

#include "library.hpp"
#include "dbElement.hpp"
//class Library;
//class dbElement;
class SearchRecommender {
	public:
		virtual std::vector<dbElement> recommend(Library*, std::string) = 0;
};

//class SearchByDirector : public SearchRecommender { public: std::vector<dbElement> recommend(Library*, std::string); };
//class SearchByGenre : public SearchRecommender { public: std::vector<dbElement> recommend(Library*, std::string); };
//class SearchByTitle : public SearchRecommender { public: std::vector<dbElement> recommend(Library*, std::string); };


#endif
