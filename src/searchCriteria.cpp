#include "../header/searchCriteria.hpp"
using namespace std;

SearchCriteria::SearchCriteria(string title, string director, std::vector<std::string> genres) {
	this->title = title;
	this->director = director;
	this->genres = genres;
}

SearchCriteria::SearchCriteria() {
	this->title = "N/A";
	this->director = "n/a";
	this->genres = {};
}

string SearchCriteria::getTitle() { return this->title; }

string SearchCriteria::getDirector() { return this->director; }

vector<string> SearchCriteria::getGenres() { return this->genres; }

void SearchCriteria::setTitle(string t) { this->title = t; }

void SearchCriteria::setDirector(string d) { this->director = d;}

void SearchCriteria::setGenres(vector<string> g) { this->genres = g; }
