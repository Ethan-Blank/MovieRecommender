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


	
	user.setUsername(str);


	return user;
}

int menu()
{

	cout <<  "-----------------------\n";
	int menuChoice = 0;
	
	while(menuChoice < 1 || menuChoice > 6 && menuChoice != 3 && menuChoice != 4)
	{
		cout << "Enter 1 to Set User Preferences: " << endl;
                cout << "Enter 2 to get a Movie Reccommendation: " << endl;
                cout << "Enter 5 to Logout: (yes 5) " << endl;
                cout << "Enter 6 to Search for a movie: (yes 6) " << endl; 
                cin >> menuChoice; //maybe need a cin.ignore()
	}
	cout <<  "-----------------------\n";

	return menuChoice;
}


int recMenu()
{
	cout <<  "-----------------------\n";
	int menuChoice = 0;
	while(menuChoice != 2 && menuChoice != 3 && menuChoice != 4)
	{
		cout << "Enter 2 to recommend by all preferences: \n";
		cout << "Enter 3 to recommend by director preference: \n";
		cout << "Enter 4 to recommend by genre preferences: \n";
		cin >> menuChoice;
	}

	cout <<  "-----------------------\n";
	
	return menuChoice;
}

int searchMovie()
{
	cout <<  "-----------------------\n";
	int menuChoice = 0;

	while(menuChoice != 6 && menuChoice != 7 && menuChoice != 8)
	{
		cout << "Enter 6 to Search By Title: \n";
		cout << "Enter 7 to Search By Director: \n";
		cout << "Enter 8 to Search By Genre: \n";
		cin >> menuChoice;
	}
	cout <<  "-----------------------\n";
	return menuChoice;
}





/*
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
*/



void goodbye()
{
	cout <<  "-----------------------\n";
	cout << "Have a nice day!\n";
	return;
}

/*
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


*/















