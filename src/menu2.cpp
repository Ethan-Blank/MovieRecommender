#include "../header/menu.hpp"
#include "../header/user.hpp"
#include "../header/library.hpp"
#include "../header/dbElement.hpp"
#include <iostream>
using namespace std;

//int menu2()
int main()
{
	int menuChoice = 0;
	user theUser = intro();
	while(menuChoice != 5)
	{
		int menuChoice = menu();
		
		
		if(menuChoice == 2)
		{
			menuChoice = recMenu();
		}
		if(menuChoice == 6)
		{
			menuChoice = searchMovie();
		}
		
		//INTERPRET MENU CHOICE

		
		if(menuChoice == 1)
		{
			int theChoice = 0;
			string str;
			while(theChoice != 1 && theChoice != 2 && theChoice != 3 && theChoice != 4 && theChoice != 5 && theChoice != 6)
			{
				cout << "Enter 1 to remove a favorite director: \n";
				cout << "Enter 2 to remove a favorite genre: \n";
				cout << "Enter 3 to add a favorite genre: \n";
				cout << "Enter 4 to add a favorite director: \n";
				cout << "Enter 5 to add a favorite movie: \n;
				cout << "Enter 6 to remove a favorite movie: \n";
				cin >> theChoice;
				cin.ignore();
			}
		
			if(theChoice == 1)
			{
				cout << "Enter the director to remove: \n";
				//cin.ignore();
				getline(cin, str);
				theUser.removeFavDirectors(str);
			}
			else if(theChoice == 2)
			{
				cout << "Enter the genre to remove: \n";
				//cin.ignore();
				getline(cin, str);
				theUser.removeGenres(str);
			}
			else if(theChoice == 3)
			{
				cout << "Enter the genre to add: \n";
				//cin.ignore();
				getline(cin, str);
				theUser.addFavGenres(str);
			}
			else if(theChoice == 4)
			{
				cout << "Enter the director to add: \n";
				//cin.ignore();
				getline(cin, str);
				theUser.addFavDirectors(str);
			}
			else if(theChoice == 5)
			{
				cout << "Enter the movie to add: \n";
				getline(cin, str);
				theUser.addWatchedMovie(str);
			}
			else if(theChoice == 6)
			{
				cout << "Enter the movie to remove: \n"
				getline(cin, str);
				theUser.removeWatchedMovies(str);
			}
			else
			{
				cout << "This wasn't supposed to happen....\n";
			}	
		}
		else if(menuChoice == 2)
		{
			//recommend by all preferences
			;
		}
		else if(menuChoice == 3)
		{
			//director preferences
			;
		}
		else if(menuChoice == 4)
		{
			//genre preferences
			;
		}
		else if(menuChoice == 5)
		{
			goodbye();
			break;	
		}
		else if(menuChoice == 6)
		{	//Search by title
			;
		}
		else if(menuChoice == 7)
		{	//search by title
			;
		}
		else if(menuChoice == 8)
		{
			//search by genre
			;
		}
		else
		{
			cout << "Come on Michael. You are a scrub. Get better at coding. \n";
		}	
	}	
	theUser.saveData();

	return 0;
}
