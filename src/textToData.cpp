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
	vector<string> genres;
	dbElement newEntry;
	bool onLastItem = false;	// This is a surprise tool that will help us later

	getline(myfile, temp); 
	//while(!myfile.eof()) {
	while(true) {
		ss = stringstream(temp);

		// 1. Title
		if (ss.peek() == '"') {	// Title contains at least one ','
			getline(ss, temp, '"');
			getline(ss, temp, '"');
		}
		else
			getline(ss, temp, ',');
		newEntry.setTitle(temp);
		if (ss.peek() == ',') getline(ss, temp, ','); // In case of case 1

		// 2. Genre(s)
		if (ss.peek() == '"') {	// Multiple genres
			getline(ss, temp, '\"');	// Gets rid of initial "
			getline(ss, temp, ',');		// Gets first genre
			while (temp.at(temp.size()-1) != '\"') {	// Gets the rest of the genres
				genres.push_back(temp);
				getline(ss, temp, ',');
			}
			temp = temp.substr(0, temp.size()-1);
			genres.push_back(temp);
			getline(ss, temp, ',');	// Gets rid of second " and other delimiting ,
		}
		else {	// Singular genre
			getline(ss, temp, ',');
			genres.push_back(temp);
		}
		newEntry.setGenres(genres);

		// 3. Director
		getline(ss, temp, ',');	
		newEntry.setDirector(temp);

		// 4. Year
		getline(ss, temp, ',');	
		newEntry.setYear(stoi(temp));

		// 5. Rating
		getline(ss, temp, ',');	
		newEntry.setRating(stof(temp));

		// Add newEntry to database
		retval.push_back(newEntry);

		
		getline(myfile, temp);
		//cerr << newEntry.getTitle() << ", " << newEntry.getDirector() << ", " << newEntry.getYear()  << ", " << newEntry.getRating() << endl;
		if (onLastItem) break;
		if (myfile.eof()) onLastItem = true;
	}

	return retval;
}

/*int main() {
	string filename = "imdb.movie.database.txt";	
	auto v = textToData(filename);
	for (auto i : v) {
		cout << i.getTitle() << endl;
	}
	return 0;
}*/
