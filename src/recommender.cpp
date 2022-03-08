#include "../header/dbElement.hpp"
#include "../header/library.hpp"
#include "../header/user.hpp"
#include "../header/searchCriteria.hpp"
#include <string>
#include <vector>

using namespace std;

Recommender::Recommender() {
	this->user_rec_list = {};
	this->genre_rec_list = {};
	this->director_rec_list = {};
	this->recently_watched = {};
}

vector<dbElement> Recommender::sortByRating(vector<dbElement> movieList) {
	bool unsorted = True;
	int i;
	
	while (unsorted) {
		unsorted = False;

		for (i = 0; i < movieList.size() - 1; i++) {
			if (movieList[i].getRating() < movieList[i + 1].getRating()) {
				swap(movieList[i], movieList[i + 1]);
				unsorted = True;
			}
		}
	}

	return movieList;	
}

	







