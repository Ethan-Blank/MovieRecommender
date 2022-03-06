#include "../header/user.hpp"
#include <iostream>
#include <fstream>

using namespace std;

user::user() {
	this->fav_directors = {};
	this->fav_genres = {};
	this->watch_history = {};
	this->username = "";
	this->password = "";
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
	userFile << "\"\"" << endl;


    // 4. Save fav directors
    if (this->fav_directors.size()) {
	for (size_t i = 0; i < this->fav_directors.size()-1; i++ ) 
	    userFile << this->fav_directors.at(i) << ", "; 
	userFile << this->fav_directors.at(this->fav_directors.size()-1) << endl;
    }
    else
	userFile << "\"\"" << endl;
    
    userFile.close();
}
