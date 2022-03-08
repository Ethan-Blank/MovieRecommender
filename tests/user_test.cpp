#ifndef __USER_TESTS__
#define __USER_TESTS__

TEST(UserTests, EmptyConstructAndSet) {
    user joe;
    std::string un = "j0e";
    std::string pw = "1234";
    std::vector<std::string> genres = {"Action", "Adventure"};
    std::vector<std::string> dirs = {"Quentin Tarantino", "Edgar Wright", "Steven Spielberg"}; 
    joe.setUsername(un);
    joe.setPassword(pw);
    joe.setFavGenres(genres);
    joe.setFavDirectors(dirs);

    EXPECT_EQ(joe.getUsername(), un);
    EXPECT_EQ(joe.getPassword(), pw);
    EXPECT_EQ(joe.getFavGenres(), genres);
    EXPECT_EQ(joe.getFavDirectors(), dirs);

}

TEST(UserTests, saveData1) {
	//user joe("Joe", "Shmo", {}, {}, {});
	user joe("Joe", "Shmo", {"Edgar Wright", "Steven Spielberg", "Booty Butthole" }, {"Action", "Drama"}, {"Movie1", "Movie 2"});
	joe.saveData();
}

TEST(UserTests, saveData2) {
	user may("May", "Balls", {"Bruce Wayne", "Bruce Willis", "Jimothy"}, {"Horror", "Thriller"}, {"The Conjuring", "Chuckie"});
	may.saveData();
}

TEST(UserTests, readData1) {
	user joe("user_data/Joe.txt");
	std::vector<std::string> movies = { "Movie1", "Movie 2" };
	std::vector<std::string> genres = { "Action", "Drama" };
	std::vector<std::string> dirs = { "Edgar Wright", "Steven Spielberg", "Booty Butthole" };
	

	EXPECT_EQ(joe.getUsername(), "Joe");
	EXPECT_EQ(joe.getWatchHistory(), movies);	
	EXPECT_EQ(joe.getFavGenres(), genres); 
	EXPECT_EQ(joe.getFavDirectors(), dirs); 
}

TEST(UserTests, readData2) {
	user joe("user_data/May.txt");
	std::vector<std::string> movies = { "The Conjuring", "Chuckie" };
	std::vector<std::string> genres = { "Horror", "Thriller" };
	std::vector<std::string> dirs = { "Bruce Wayne", "Bruce Willis", "Jimothy" };
	

	EXPECT_EQ(joe.getUsername(), "May");
	EXPECT_EQ(joe.getWatchHistory(), movies);	
	EXPECT_EQ(joe.getFavGenres(), genres); 
	EXPECT_EQ(joe.getFavDirectors(), dirs); 
}

TEST(UserTests, removedir) {
	user joe("user_data/Joe.txt");
        std::vector<std::string> movies = { "Movie1", "Movie 2" };
        std::vector<std::string> genres = { "Action", "Drama" };
        std::vector<std::string> dirs = { "Edgar Wright", "Booty Butthole" };
	
	joe.removeFavDirectors("Steven Spielberg");
	
	EXPECT_EQ(joe.getFavDirectors, dirs);
}

#endif 
