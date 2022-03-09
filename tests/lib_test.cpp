#ifndef __LIB_TEST__
#define __LIB_TEST__

TEST(LibraryTest, fileToData1) {
	std::string filename = "imdb.movie.database.txt";	
	Library lib(filename);
	
	std::string title = "Guardians of the Galaxy";
	dbElement movie1 = lib.searchByTitle(title);
	EXPECT_EQ(movie1.getTitle(), title);
}

TEST(LibraryTest, fileToData2) {
	std::string filename = "imdb.movie.database.txt";	
	Library lib(filename);

	std::string title = "Why Him?";
	int index = lib.searchByTitle(title);
	EXPECT_EQ(index, 30);
}

TEST(LibraryTest, fileToData3) {
	std::string filename = "imdb.movie.database.txt";	
	Library lib(filename);
	
	std::string title = "World War Z"; 
	int index = lib.searchByTitle(title);
	EXPECT_EQ(index, 432);
}

TEST(LibraryTest, fileToDataNonEntry) {
	std::string filename = "imdb.movie.database.txt";	
	Library lib(filename);

	std::string title = "peepee poo"; 
	int index = lib.searchByTitle(title);
	EXPECT_EQ(index, -1);
}

TEST(LibraryTest, fileToDataNullEntry) {
	std::string filename = "imdb.movie.database.txt";	
	Library lib(filename);

	std::string title = ""; 
	int index = lib.searchByTitle(title);
	EXPECT_EQ(index, -1);
}

#endif
