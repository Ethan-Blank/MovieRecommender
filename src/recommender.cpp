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
	bool unsorted = true;
	int i;
	
	while (unsorted) {
		unsorted = false;

		for (i = 0; i < movieList.size() - 1; i++) {
			if (movieList[i].getRating() < movieList[i + 1].getRating()) {
				swap(movieList[i], movieList[i + 1]);
				unsorted = true;
			}
		}
	}

	return movieList;	
}

vector<dbElement> Recommender::sortByPreferences(Library* theLibrary, user* theUser) 
{
	vector<dbElement> moviesYes = {};
	vector<int> moviesPoints = {};
	
	unsigned favGenreSize = user->getFavGenres().size();
	unsigned favDirSize = user->getFavDirectors().size();

	
	
	vector<dbElement> vect = theLibrary.fileToData("imdb.movie.database.txt");

	for(auto it = vect.begin(); it != vect.end(); ++it)
	{
		unsigned int pt = 0;

		for(int i = 0; i < favGenreSize; ++i)
		{
			if(*it.compare(user->getFavGenres().at(i)) == 0)
			{
				++pt;
			}	
		}

		for(int j  = 0; j < favDirSize; ++j)
		{
			if(*it.compare(user->getFavDirectors().at(j)) == 0)
			{
				++pt;
			}
		}
		
		if (pt>0)
		{
			moviesYes.push_back(*it);
			moviesPoints.push_back(pt);			
		}
		
	}

	
	return sortByPoints(moviesYes, moviesPoints);
	

}
	
vector<dbElement> Recommender::sortByPoints(vector<dbElement> movies, vector<int> points) {
	vector<dbElement> sortedMovies = {};

	unsigned x;
	unsigned y;

	for (x = 7; x > 0; x--) {
		for(y = 0; y < movies.size(); y++) {
			if (x == points.at(y)) {
				sortedMovies.push_back(movies.at(y);
			}
		}
	}

	return sortedMovies;
}






