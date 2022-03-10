#include "../header/dbElement.hpp"
#include "../header/library.hpp"
#include "../header/user.hpp"
#include "../header/searchCriteria.hpp"
#include <string>
#include <vector>

using namespace std;

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

vector<dbElement> Recommender::recByPreferences(Library* theLibrary, user* theUser) 
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
	

vector<dbElement> Recommender::recByGenre(Library* theLibrary, user* theUser){
	vector<dbElement> moviesYes = {};
	vector<int> moviesPoints = {};
	
	for (auto it theLibrary.getMovies().begin(); it != theLibrary.getMovies.end(); ++it){
		unsigned int pt = 0;
		for (int i = 0; i < getFavGenres().size();i++){
			if(*it.compare(user->getFavGenres().at(i))== 0){
				pt++
			}
		}	
		if (pt>0){
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






