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
