#ifndef __RECOMMENDER__
#define __RECOMMENDER__
#include "../header/dbElement.hpp"
#include "../header/library.hpp"
#include "../header/searchCriteria.hpp"
#include "../header/user.hpp"
#include <string>
#include <vector>

using namespace std;

class recommender {
    private:
	vector<dbElement> sortByRating(vector<dbElement>);

    public:
	Recommender();
	virtual vector<dbElement> reccommend(SearchCriteria) = 0;
};

#endif 
