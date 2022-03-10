#ifndef __S_GENRE_TEST__
#define __S_GENRE_TEST__
#include "../header/searchByGenre.hpp"
#include <string>
#include <vector>

using namespace std;

TEST(SearchGenreTest, GenreList) {
	string filename = "imdb.movie.database.txt";
	Library lib(filename); 

	SearchByGenre sbc;

	string genre = "Action";
	//vector<dbElement> moviesAction = sbc.recommend(&lib, genre);
	vector<dbElement> moviesAction = lib.acceptSR(&sbc, genre);
	EXPECT_EQ(moviesAction.at(1).getTitle(), "Suicide Squad");
}

#endif
	
