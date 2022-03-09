#ifndef __LIB_TEST__
#define __LIB_TEST__
#include "../header/library.hpp"
#include<vector>
#include<string>

TEST(LibraryTest, fileToDataTitle) {
	std::string filename = "imdb.movie.database.txt";	
	Library lib(filename);
	
	std::string title = "Guardians of the Galaxy";
	dbElement moviesTitle = lib.searchByTitle(title);
	EXPECT_EQ(moviesTitle.getTitle(), title);
}

TEST(LibraryTest, fileToDataGenre) {
	std::string filename = "imdb.movie.database.txt";	
	Library lib(filename);

	std::string genre = "Comedy";
	std::vector<dbElement> moviesComedy = lib.searchByGenre(genre);
	EXPECT_EQ(moviesComedy.at(9).getTitle(), "Why Him?");
}

TEST(LibraryTest, fileToDataDirector) {
	std::string filename = "imdb.movie.database.txt";	
	Library lib(filename);
	
	std::string director = "Mel Gibson"; 
	std::vector<dbElement> moviesDirector = lib.searchByDirector(director);
	EXPECT_EQ(moviesDirector.at(0).getTitle(), "Hacksaw Ridge");
}

TEST(LibraryTest, fileToDataRating) {
	std::string filename = "imdb.movie.database.txt";
	Library lib(filename);

	float rating = 8.5;
	std::vector<dbElement> moviesRating = lib.searchAboveRating(rating);
	EXPECT_EQ(moviesRating.at(1).getTitle(), "The Dark Knight");
}

/*TEST(LibraryTest, fileToDataNonEntry) {
	std::string filename = "imdb.movie.database.txt";	
	Library lib(filename);
	
	std::vector<dbElement> emptyList = {};
	std::string title = "peepee poo"; 
	dbElement moviesTitle = lib.searchByTitle(title);
	EXPECT_EQ(moviesTitle, emptyList);
}*/

//TEST(LibraryTest, fileToDataNullEntry) {
//	std::string filename = "imdb.movie.database.txt";	
//	Library lib(filename);
//
//	std::string title = ""; 
//	int index = lib.searchByTitle(title);
//	EXPECT_EQ(index, -1);
//}

#endif
