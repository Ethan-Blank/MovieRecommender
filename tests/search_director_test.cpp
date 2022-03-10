#ifndef __S_DIRECTOR_TEST__
#define __S_DIRECTOR_TEST__
#include "../header/searchByDirector.hpp"
#include <string>
#include <vector>

using namespace std;

TEST(SearchDirectorTest, DirectorList) {
	string filename = "imdb.movie.database.txt";
	Library lib(filename);
	
	SearchByDirector sbc;
	string director = "Quentin Tarantino";
	vector<dbElement> moviesTaran = lib.acceptSR(&sbc, director);
	EXPECT_EQ(moviesTaran.at(3).getTitle(), "Death Proof");
}

#endif
