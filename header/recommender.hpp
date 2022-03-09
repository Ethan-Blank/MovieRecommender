#ifndef __RECOMMENDER__
#define __RECOMMENDER__
#include "../header/dbElement.hpp"
#include "../header/library.hpp"
#include "../header/searchCriteria.hpp"
#include "../header/user.hpp"
#include <string>
#include <vector>
#include <iostream>

class Recommender {
    private:
	std::vector<dbElement> sortByRating(std::vector<dbElement>);

    public:
	virtual std::vector<dbElement> recommend(Library*, SearchCriteria) = 0;
};


class concRec1 : public Recommender {
	public:
		std::vector<dbElement> recommend(Library*, SearchCriteria) {
			return std::vector<dbElement>();
		}
};

#endif 
