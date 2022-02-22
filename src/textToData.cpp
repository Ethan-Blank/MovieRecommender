#include <iostream>
#include <fstream>
#include <sstream>
#include<vector>
#include "../header/dbElement.hpp"
using namespace std;

vector<dbElement> textToData(string filename) {
	ifstream myfile;
	myfile.open(filename);

	vector<dbElement> retval;
	stringstream ss;
	string temp;
	
	// As soon as getters are done, all of this can be contained
	// within *ONE* dbElement variable
	string title;
	vector<string> genres;
	string dir;
	int year;
	float score;

	getline(myfile, temp); 
	while(!myfile.eof()) {
		ss = stringstream(temp);

		// 1. Title
		getline(ss, title, ',');
		// 2. Genre(s)
		getline(ss, temp, "\"");	// Gets rid of initial "
		getline(ss, temp, "\"");	// Grabs rest of genres, up until last "

		// 3. Director
		// 4. Year
		// 5. Rating
		getline(myfile, temp);
	}
}

int main() {
	string filename = "imdb.movie.database.txt";	
	textToData(filename);
	return 0;
}
