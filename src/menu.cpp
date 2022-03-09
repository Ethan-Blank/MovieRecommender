#include "../header/menu.hpp"
#include "../header/dbElement.hpp"
#include "../header/library.hpp"
#include <iostream>
#include <string>

using namespace std;

user intro()
{
	user user;
	cout <<  "-----------------------\n";
	cout << "CS100 MOVIE RECCOMENDER PROJECT BY MICHAEL, NANMA, ETHAN AND OWEN!!!\n";
	cout << "WINTER 2022\n";
	cout <<  "-----------------------\n";

	cout << "Enter your username: \n";
	string str;
	getline(cin, str); //maybe add cin.ignore()
	//Maybe add this to file?


	vector<string> favGenres;
	vector<string> favDirectors;

	string preferences = "init";
	for(int i = 0; preferences.compare("Exit") != 0; ++i)
	{
		cout << "Enter your favorite genre(s) or 'Exit': \n";
		getline(cin, preferences);
		favGenres.push_back(preferences);
	}
	favGenres.pop_back();



	cout << "Enter your favorite director: \n";
	preferences = "init";
	for(int i = 0; preferences.compare("Exit") != 0; ++i)
	{
		cout << "Enter your favorite director(s) or 'Exit': \n";
		getline(cin, preferences);
		favDirectors.push_back(preferences);
	}
	favDirectors.pop_back();
	
	user.setFavDirectors(favDirectors);
	user.setFavGenres(favGenres);
	user.setUsername(str);



	return user;
}

int menu()
{
	string menuChoice = "0";
	
	while(stoi(menuChoice) < 1 || stoi(menuChoice) > 4)
	{
		cout << "Enter 1 to Set User Preferences: " << endl;
                cout << "Enter 2 to get a Movie Reccommendation: " << endl;
                cout << "Enter 3 to Logout: " << endl;
                cout << "Enter 4 to Search for a movie: " << endl;
		cout << 
                getline(cin, menuChoice); //maybe need a cin.ignore()
	}
	
	return menuChoice;
}


void interpret_menu_choice(int menuChoice, user* u)
{
	if(menuChoice == 1)
	{
		//Set User Preferences 
	}
	else if(menuChoice == 2)
	{
		//Reccommend by Genre
	}
	else if(menuChoice == 3)
	{
		goodbye();
		u->saveData();
	}
	else //menuChoice == 4
	{
		//Reccommend by Director
	}

	return;
}


void goodbye()
{
	cout << "Have a nice day!\n";
	return;
}


bool searchMovie()
{
	//title, director, year, rating
	bool found = false;
	string theTitle, theDirector;
	float theRating;
	int theYear;

	Library theLibrary("imdb.movie.database.txt");

	cout << "Enter a title: \n";
	getline(cin, theTitle);

	cout << "Enter the Director: \n";
	getline(cin, theDirector);

	cout << "Enter the year of release: \n";
	cin >> theYear;

	cout << "Enter the rating: \n";
	cin >> theRating;

	dbElement theMovie(theTitle, theDirector, theYear, theRating);	
	
	vector<dbElement> results = theLibrary.fileToData();
	
	for(unsigned i = 0; i < results.size(); ++i)
	{
		if(theMovie == results.at(i))
		{
			found = true;
			i += results.size();
			continue;	
		}	
	}
	
	if(found)
	{
		cout << "The movie was found\n";
	}
	else
	{
		cout << "The movie could not be found\n";
	}

	return found;
}


















