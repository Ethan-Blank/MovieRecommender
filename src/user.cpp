#include "../header/user.hpp"
#include <iostream>

using namespace std;

user::user() {
	this->fav_directors = [];
	this->fav_genres = [];
	this->watch_history = [];
	this->username = "";
	this->password = "";
}

user::user(vector<string> directors, vector<string> genres, vector<string> watched_movies, string un, string pw) {
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
	this->watch_history.append(movie);
}

void user::setUsername(string un) {
	this->username = un;
}

void user::setPassword(string pw) {
	this->password = pw;
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






