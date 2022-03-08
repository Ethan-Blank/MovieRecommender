#include "../header/dbElement.hpp"
#include "../header/library.hpp"
#include "../header/user.hpp"
#include "../header/searchCriteria.hpp"
#include <string>
#include <vector>

using namespace std;

Recommender::Recommender(vector<dbElement> userList, vector<dbElement> genreList,vector<dbElement> directorList, vector<dbElement> recentList) {
	this->user_rec_list = userList;
	this->genre_rec_list = genreList;
	this->director_rec_list = directorList;
	this->recently_watched = recentList;
}

Recommender::Recommender() {
	this->user_rec_list = {};
	this->genre_rec_list = {};
	this->director_rec_list = {};
	this->recently_watched = {};
}

vector<dbElement> Recommender::getUserList() { return this->user_rec_list; }

vector<dbElement> Recommender::getGenreList() { return this->genre_rec_list; }

vector<dbElement> Recommender::getDirectorList() { return this->director_rec_list; }

vector<dbElement> Recommender::getRecentlyWatchedList() { return this->recently_watched; }

void Recommender::setUserList(vector<dbElement> u) { this->user_rec_list = u; }

void Recommender::setGenreList(vector<dbElement> g) { this->genre_rec_list = g; }

void Recommender::setDirectorList(vector<dbElement> d) { this->director_rec_list = d; }

void Recommender::setRecentlyWatchedList(vector<dbELement> r) { this->recently_watched = r; }


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

void Recommender::sortGenreList() {
	







