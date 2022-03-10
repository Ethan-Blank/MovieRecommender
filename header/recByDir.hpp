#ifndef __REC_DIR__
#define __REC_DIR__

#include "recommender.hpp"
#include <vector>

class RecByDir : public UserRecommender {
	public:
	std::vector<dbElement> recommend(Library*, user*);
};

#endif
