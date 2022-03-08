#include "../header/user.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

user::user() {
	this->fav_directors = {};
	this->fav_genres = {};
	this->watch_history = {};
	this->username = "";
	this->password = "";
}

user::user(string filepath) {
	*this = readData(filepath);
}

//user::user(vector<string> directors, vector<string> genres, vector<string> watched_movies, strin un, string pw) {
//user::user(string un, string pw, vector<string> directors = {}, vector<string> genres = {}, vector<string> watched_movies = {}) {
user::user(string un, string pw, vector<string> directors, vector<string> genres, vector<string> watched_movies) {
	this->fav_directors = directors;
	this->fav_genres = genres;
	this->watch_history = watched_movies;
	this->username = un;
	this->password = pw;
}

vector<string> user::getFavDirectors() {
	return this->fav_directors;
}

vector<string> user::getFavGenres() {
	return this->fav_genres;
}

vector<string> user::getWatchHistory() {
	return this->watch_history;
}

string user::getPassword() {
	return this->password;
}

string user::getUsername() {
	return this->username;
}

void user::setFavDirectors(vector<string> directors) {
	this->fav_directors = directors;
}

void user::setFavGenres(vector<string> genres) {
	this->fav_genres = genres;
}

void user::addWatchedMovie(string movie) {
	this->watch_history.push_back(movie);
}

void user::setUsername(string un) {
	this->username = un;
}

void user::setPassword(string pw) {
	this->password = pw;
}

void user::setWatchHistory(vector<string> s) {
	this->watch_history = s;
}

void user::saveData() {
    ofstream userFile;
    string filename = this->username + ".txt";
    string filepath = "user_data/" + filename;
    userFile.open(filepath);

    // 1. Save un and pw
    userFile << this->username + ", " << this->password << endl;

    // 2. Save recently watched
    if (this->watch_history.size()) {
	for (size_t i = 0; i < this->watch_history.size()-1; i++ ) 
	    userFile <<"\"" << this->watch_history.at(i) << "\", "; 
	userFile << "\"" << this->watch_history.at(this->watch_history.size()-1) << "\"" << endl;
    }
    else
	userFile << "\"\"" << endl; 

    // 3. Save fav genres
    if (this->fav_genres.size()) {
	for (size_t i = 0; i < this->fav_genres.size()-1; i++ ) 
	    userFile << this->fav_genres.at(i) << ", "; 
	userFile << this->fav_genres.at(this->fav_genres.size()-1) << endl;
    }
    else 
	userFile << endl;


    // 4. Save fav directors
    if (this->fav_directors.size()) {
	for (size_t i = 0; i < this->fav_directors.size()-1; i++ ) 
	    userFile << this->fav_directors.at(i) << ", "; 
	userFile << this->fav_directors.at(this->fav_directors.size()-1) << endl;
    }
    else
	userFile << endl;
    
    userFile.close();
}

user user::readData(string filepath) {
	user u;
	ifstream userData;
	userData.open(filepath);

	stringstream line;
	string temp;

	// 1. Get un 
	getline(userData, temp);
	line = stringstream(temp);
	getline(line, temp, ',');
	u.setUsername(temp);

	// 2. Get watch_history 
	// TODO probably will fuck up if a movie title contains a '"'
	vector<string> v; 
	getline(userData, temp);
	line = stringstream(temp);
	getline(line, temp, '"');
	while (!line.eof()) {
		// Get Title
		getline(line, temp, '"');
		
		// Add Title
		v.push_back(temp);	

		// Clear first quotation mark and "check" if line.eof()
		getline(line, temp, '"');
	}
	u.setWatchHistory(v);	

	// 3. Get fav_genres
	v.clear();
	getline(userData, temp);
	line = stringstream(temp);
	while (!line.eof()) {
		getline(line, temp, ',');
		v.push_back(temp);
	
		getline(line, temp, ' ');
		if (line.eof()) break;
	}
	u.setFavGenres(v);
	
	// 4. Get fav_directors
	v.clear();
	getline(userData, temp);
	line = stringstream(temp);
	getline(line, temp, ',');
	//while (!line.eof()) {
	while (true) {
		v.push_back(temp);

		getline(line, temp, ' ');
		if (line.eof()) break;		

		getline(line, temp, ',');
	}
	u.setFavDirectors(v);
	
	return u;
}

void user::removeFavDirectors(string directors){
	for (auto it = fav_directors.begin(); it != fav_directors.end(); i++) {
		if (*it == directors) {
			fav_directors.erase(it);
			return;
		}
	}
}

void user::removeGenres(strings genres){
	for(auto it = fav_genres.begin(); it != fav_genres; i++){
		if (*it == genres){
			fav_genres.erease(it);
			return;
		}
	} 
}

void user::removeWatchedMoive(string movie){
	for (auto it = watch_history.begin(); it != ; i++){
                if (*it == movie){
                        watch_history.erease(it);
                        return;
                }
        }
}







