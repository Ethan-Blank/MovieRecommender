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
			getline(ss, temp, ',');	// Gets rid of second " and other delimiting ,
		}
		else {	// Singular genre
			getline(ss, temp, ',');
			genres.push_back(temp);
		}
		newEntry.setGenres(genres);
		genres.clear();

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

dbElement Library::searchByTitle(string title) {
	int i;

	for (i = 0; i < movies.size(); i++) 
		if (movies.at(i).getTitle() == title)
			return movies.at(i);
	return -1;
}

vector<dbElement> Library::searchByGenre(string genre) {
	vector<dbElement> genreList = {};
	int i;
	int j;

	for (i = 0; i < movies.size(); i++) {
		vector<string> movieGenres = movies.at(i).getGenres(); 
		for (j = 0; j < movieGenres.size(); j++) {
			if (movieGenres.at(j) == genre) {
				genreList.push_back(movies.at(i));
				j = movieGenres.size();
			}
		}
	}

	return genreList;
}

vector<dbElement> Library::searchByDirector(string director) {
	vector<dbElement> directorList = {};
	int i;

	for (i = 0; i < movies.size(); i++) {
		if (movies.at(i).getDirector() == director) {
			directorList.push_back(movies.at(i));
		}
	}

	return directorList;
}

vector<dbElement> Library::searchAboveRating(float rating) {
	vector<dbElement> ratingList = {};
	int i;

	for (i = 0; i < movies.size(); i++) {
		if (movies.at(i).getRating() > rating) {
			ratingList.push_back(movies.at(i));
		}
	}

	return ratingList;
}

vector<dbElement> Library::searchByYear(int year) {
	vector<dbElement> yearList = {};
	int i;

	for (i = 0; movies.size(); i++) {
		if (movies.at(i).getYear == year) {
			yearList.push_back(movies.at(i));
		}
	}
	
	return yearList;
}











