#ifndef __S_TITLE_TEST__
#define __S_TILTE_TEST__
#include "../header/searchByTitle.hpp"
#include <string>
#include <vector>

using namespace std;

TEST(SearchTitleTest, TitleList) {
	string filename = "imdb.movie.database.txt";
	Library lib(filename);
	
	SearchByTitle sbc;
	string title = "Jason Bourne";
	vector<dbElement> moviesJason = lib.accept(sbc, title);
	EXPECT_EQ(moviesJason.at(0).getTitle(), title);
}

#endif
