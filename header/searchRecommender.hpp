#ifndef __SREC__
#define __SREC__

#include "library.hpp"
#include "dbElement.hpp"

class SearchRecommender {
	public:
		virtual std::vector<dbElement> recommend(Library*, std::string) = 0;
};

#endif
