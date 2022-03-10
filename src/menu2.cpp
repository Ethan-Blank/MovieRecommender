#include "../header/menu.hpp"
#include "../header/user.hpp"
#include "../header/library.hpp"
#include "../header/dbElement.hpp"
#include "../header/recByPref.hpp"
#include "../header/recByGenre.hpp"
#include "../header/recByDir.hpp"
#include "../header/searchByDirector.hpp"
#include "../header/searchByGenre.hpp"
#include "../header/searchByTitle.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//int menu2()
int main()
{
	int menuChoice = 0;
	user theUser = intro();
	Library lib("imdb.movie.database.txt");
	unsigned int i;
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
			while(theChoice != 1 && theChoice != 2 && theChoice != 3 && theChoice != 4)
			{
				cout << "Enter 1 to remove a favorite director: \n";
				cout << "Enter 2 to remove a favorite genre: \n";
				cout << "Enter 3 to add a favorite genre: \n";
				cout << "Enter 4 to add a favorite director: \n";
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
			else
			{
				cout << "This wasn't supposed to happen....\n";
			}	
		}
		else if(menuChoice == 2)
		{
			RecByPref rbp;
			vector<dbElement> recPrefList = lib.acceptUR(&rbp, &theUser);
			cout << "Recommendations from User Preferences: " << endl;
			if (recPrefList.size() > 10) {
				for (i = 0; i < 10; i++) {
					recPrefList.at(i).print();
				}
			}
			else {
				for (i = 0; i < recPrefList.size(); i++) {
					recPrefList.at(i).print();
				}
			}
		}
		else if(menuChoice == 3)
		{
			//vector<dbElement> recDirList = recByDir(lib, theUser);
			RecByDir rcb;
			vector<dbElement> recDirList = lib.acceptUR(&rcb, &theUser); 
			cout << "Recommendations from User's Directors: " << endl;
			if (recDirList.size() > 10) {
				for (i = 0; i < 10; i++) {
					recDirList.at(i).print();
				}	
			}
			else {
				for (i = 0; i < recDirList.size(); i++) {
					recDirList.at(i).print();
				}
			}
		}
		else if(menuChoice == 4)
		{
			RecByGenre rbg;
			vector<dbElement> recGenList = lib.acceptUR(&rbg, &theUser);
			cout << "Reccommendations from User's Genres: " << endl;
			if (recGenList.size() > 10) { 
				for (i = 0; i < 10; i++) {
					recGenList.at(i).print();
				}
			}
			else {
				for (i = 0; i < recGenList.size(); i++) {
					recGenList.at(i).print();
				}
			}
		}
		else if(menuChoice == 5)
		{
			goodbye();
			break;	
		}
		else if(menuChoice == 6)
		{	
			cout << "Enter a title: ";
			string str;
			getline(cin, str);
			
			SearchByTitle sbt;
			vector<dbElement> titleSearch = lib.acceptSR(&sbt, str);
			titleSearch.at(0).print();
 
		}
		else if(menuChoice == 7)
		{	//search by director
			cout << "Enter a director: ";
			string str;
			getline(cin, str);

			SearchByDirector sbd;
			vector<dbElement> directorSearch = lib.acceptSR(&sbd, str);
			for (i = 0; i < directorSearch.size(); i++) {
				directorSearch.at(i).print();
			}
		}
		else if(menuChoice == 8)
		{
			//search by genre
			cout << "Enter a genre: ";
			string str;
			getline(cin, str);
	
			SearchByGenre sbg;
			vector<dbElement> genreSearch = lib.acceptSR(&sbg, str);
			for (i = 0; i < 10; i++) {
				genreSearch.at(i).print();
			}
		}
		else
		{
			cout << "Come on Michael. You are a scrub. Get better at coding. \n";
		}	
	}	
	theUser.saveData();

	return 0;
}
