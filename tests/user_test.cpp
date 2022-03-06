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

TEST(UserTests, saveData) {
	//user joe("Joe", "Shmo", {}, {}, {});
	user joe("Joe", "Shmo", {"Edgar Wright", "Steven Spielberg", "Booty Butthole"}, {"Action", "Drama"}, {"Movie1", "Movie 2"});
	joe.saveData();

	EXPECT_EQ(true, true);
}

#endif 
