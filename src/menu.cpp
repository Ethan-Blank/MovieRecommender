#include "../header/menu.hpp"
#include <iostream>
#include <string>

using namespace std;

User intro()
{
	User user;
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
		cout << "Enter 1 to Reccommend by Title: " << endl;                                                                                                                                                    cout << "Enter 2 to Reccommend by Genre: " << endl;                                                                                                                                                    cout << "Enter 3 to Reccommend by Rating: " << endl;                                                                                                                                                   cout << "Enter 4 to Reccommend by Director: " << endl;                                                                                                                                                 getline(cin, menuChoice); //maybe need a cin.ignore()
	}
	
	return menuChoice;
}


void interpret_menu_choice(int menuChoice)
{
	if(menuChoice == 1)
	{
		//Reccommend by Title 
	}
	else if(menuChoice == 2)
	{
		//Reccommend by Genre
	}
	else if(menuChoice == 3)
	{
		//Reccommend by Rating
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





















