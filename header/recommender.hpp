#ifndef __RECOMMENDER__
#define __RECOMMENDER__
#include "user.hpp"
#include "library.hpp"
#include <string>
#include <vector>

class UserRecommender {
    private:

    public:
	virtual std::vector<dbElement> recommend(Library*, user*) = 0;
	std::vector<dbElement> sortByRating(std::vector<dbElement>);
};


class concRec1 : public UserRecommender {
	public:
		std::vector<dbElement> recommend(Library*, user*) {
			return std::vector<dbElement>();
		}
};

#endif 
