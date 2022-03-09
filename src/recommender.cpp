#include "../header/dbElement.hpp"
#include "../header/library.hpp"
#include "../header/user.hpp"
#include "../header/searchCriteria.hpp"
#include "../header/recommender.hpp"
#include <string>
#include <vector>

using namespace std;

vector<dbElement> Recommender::sortByRating(vector<dbElement> movieList) {
	bool unsorted = true;
	int i;
	
	while (unsorted) {
		unsorted = false;

		for (i = 0; i < movieList.size() - 1; i++) {
			if (movieList[i].getRating() < movieList.at(i + 1).getRating()) {
				swap(movieList[i], movieList.at(i + 1));
				unsorted = true;
			}
		}
	}

	return movieList;	
}
