#ifndef __REC_GENRE__
#define __REC_GENRE__

#include "recommender.hpp"
#include <vector>

class RecByGenre : public UserRecommender {
	public:
	std::vector<dbElement> recommend(Library*, user*);
};

#endif
