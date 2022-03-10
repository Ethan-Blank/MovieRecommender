#include "../header/library.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include<vector>
using namespace std;

Library::Library(string filename) { this->movies = fileToData(filename); }

vector<dbElement> Library::fileToData(string filename) {
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
		//cout << "Title: " << temp << endl;
		if (ss.peek() == ',') getline(ss, temp, ','); // In case of case 1

		// 2. Genre(s)
		if (ss.peek() == '"') {	// Multiple genres
			getline(ss, temp, '\"');	// Gets rid of initial "
			getline(ss, temp, ',');		// Gets first genre
			while (temp.at(temp.size()-1) != '\"') {	// Gets the rest of the genres
				genres.push_back(temp);
				getline(ss, temp, ',');
			}
			temp = temp.substr(0, temp.size()-1); // Get rid of ',' at the end
			genres.push_back(temp);
			//getline(ss, temp, ',');	// Gets rid of second " and other delimiting ,
			//getline(ss, temp, '"');	// Gets rid of second " and other delimiting ,
		}
		else {	// Singular genre
			getline(ss, temp, ',');
			genres.push_back(temp);
		}
		//for (auto i : genres)
		//	cout << i << "\t";
		//cout << endl;
		newEntry.setGenres(genres);
		genres.clear();

		// 3. Director
		getline(ss, temp, ',');	
		newEntry.setDirector(temp);
		//cout << "Dir: " << temp << endl;

		// 4. Year
		getline(ss, temp, ',');	
		newEntry.setYear(stoi(temp));
		//cout << "Year: " << temp << endl;

		// 5. Rating
		getline(ss, temp, ',');	
		newEntry.setRating(stof(temp));
		//cout << "Rating: " << temp << endl;

		// Add newEntry to database
		retval.push_back(newEntry);

		
		getline(myfile, temp);
		cerr << newEntry.getTitle() << ", " << newEntry.getDirector() << ", " << newEntry.getYear()  << ", " << newEntry.getRating() << endl;
		if (onLastItem) break;
		if (myfile.eof()) onLastItem = true;
	}

	return retval;
}

int Library::searchByTitle(string title) {
	for (size_t i = 0; i < movies.size(); i++) 
		if (movies.at(i).getTitle() == title)
			return i;
	return -1;
}

vector<dbElement> Library::acceptUR(UserRecommender* r, user* u) {
	return r->recommend(this, u);
}

vector<dbElement> Library::acceptSR(SearchRecommender* r, string cat, string sc) {
	return r->recommend(this, cat, sc);
}

vector<dbElement> Library::getDatabase() {
	return this->movies;
}
