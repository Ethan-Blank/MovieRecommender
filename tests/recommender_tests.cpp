#ifndef REC_TESTS_
#define REC_TESTS_


#include "../header/recommender.hpp"


TEST(AllPreferences, AllPreferencesTest)
{
	Library theLibrary("../imdb.movie.database.txt"); //Maybe a direct path isn't needed
	

	vector<dbElement> control = theLibrary.fileToData("../imdb.movie.database.txt");

	Recommender theRecommender;
	
	user theUser;

	theUser.addFavDirectors("Christophe Lourdelet");

	theUser.addFavGenres("Animation");
	theUser.addFavGenres("Comedy");
	theUser.addFavGenres("Family");


	Library* ptr1 = &theLibrary;
	user* ptr2 = &theUser;
	
	
	vector<dbElement> vect = theRecommender.recByPreferences(ptr1, ptr2);
	
	EXPECT_EQ("Sing", vect.at(0).getTitle());

}







#endif
