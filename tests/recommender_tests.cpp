#ifndef REC_TESTS_
#define REC_TESTS_


#include "../header/recommender.hpp"
#include "../header/library.hpp"
#include "../header/user.hpp"


TEST(RecommenderTest, AllPreferencesTest)
{

	//cout << "0\n";

	Library theLibrary("../imdb.movie.database.txt"); //Maybe a direct path isn't needed
	
	//cout << "1\n";
	
	vector<dbElement> control = theLibrary.fileToData("../imdb.movie.database.txt");
	
	//cout << "2\n";
	

	Recommender theRecommender;
	
	//cout << "3\n";


	user theUser;

	//cout << "4\n";


	theUser.addFavDirectors("Christophe Lourdelet");

	//cout << "5\n";


	theUser.addFavGenres("Animation");

	//cout << "6\n";


	theUser.addFavGenres("Comedy");

	//cout << "7\n";


	theUser.addFavGenres("Family");

	//cout << "8\n";


	Library* ptr1 = &theLibrary;

	//cout << "9\n";	

	user* ptr2 = &theUser;

	//cout << "10\n";
	
	
	vector<dbElement> vect = theRecommender.recByPreferences(ptr1, ptr2);

	//cout << "11\n";
	
	

	//cout << "Title: " << vect.at(0).getTitle() << endl;

	//cout << "12\n";
		
	EXPECT_EQ("Sing", vect.at(0).getTitle());

}



TEST(Recommender, DirectorTest)
{
	Library theLibrary("../imdb.movie.database.txt");	
	vector<dbElement> control = theLibrary.fileToData("../imdb.movie.database.txt");

	user theUser;

	Recommender theRecommender;

	
	theUser.addFavDirectors("Luke Greenfield");

		
	Library* ptr1 = &theLibrary;

	user* ptr2 = &theUser;

	
	vector<dbElement> vect = theRecommender.recByDir(ptr1, ptr2); 
	
	//cout << "Size: " << vect.size() << endl;	

	EXPECT_EQ("Luke Greenfield", vect.at(0).getDirector());

}


TEST(Recommender, GenreTest)
{

	Library theLibrary("../imdb.movie.database.txt");
	vector<dbElement> control = theLibrary.fileToData("../imdb.movie.database.txt");

	user theUser;

	Recommender theRecommender;

	theUser.addFavGenres("Comedy");

	
	Library* ptr1 = &theLibrary;

	user* ptr2 = &theUser;

	vector<dbElement> vect = theRecommender.recByGenre(ptr1, ptr2);

	EXPECT_EQ("Sing", vect.at(0).getTitle());

}



















#endif
