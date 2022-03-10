#ifndef __REC_PREF__
#define __REC_PREF__

#include "recommender.hpp"
#include <vector>

class RecByPref : public UserRecommender {
	public:
	std::vector<dbElement> recommend(Library*, user*);
};

#endif
