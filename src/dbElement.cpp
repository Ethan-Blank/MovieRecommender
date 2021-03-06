#include "../header/dbElement.hpp"
#include <iostream>
using namespace std;

dbElement::dbElement() {
	this->title = "N\\A";
	this->director = "N\\A";
	this->year = -1;
	this->rating = 0.0;
}

dbElement::dbElement(string title, string dir, int year, float rating) {
	this->title = title;
	this->director = dir;
	this->year = year;
	this->rating = rating;
}

void dbElement::setTitle(string title) {
	this->title = title;
}

void dbElement::setDirector(string dir) {
	this->director = dir;
}

void dbElement::setGenres(vector<string> v) {
	this->genres = v;
}

void dbElement::setYear(int year) {
	this->year = year;
}

void dbElement::setRating(float rating) {
	this->rating = rating;
}

string dbElement::getTitle(){
	return this->title;
}

string dbElement::getDirector(){
	return this->director;
}

int dbElement::getYear(){
	return this->year;
}

vector<string> dbElement::getGenres() {
	return this->genres;
}

float dbElement::getRating(){
	return this->rating;
}


bool operator==(dbElement left, dbElement right)
{
	return ((left.getYear() == right.getYear()) && (left.getRating() == right.getRating()) && (left.getDirector().compare(right.getDirector()) == 0 ) && (left.getTitle().compare(right.getTitle()) == 0));
}

void dbElement::print() {
	cout << title << ", ";

	cout << '"';
	for (size_t i = 0; i < genres.size(); i++) {
		cout << genres.at(i);
		if (i != genres.size()-1) 
			cout << ", ";
	}
	cout << "\", ";

	cout << director << ", " << year << ", " << rating << endl;
}
