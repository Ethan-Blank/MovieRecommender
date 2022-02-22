#ifndef __DB_ELEM__
#define __DB_ELEM__
#include<string>

class dbElement {
	private:
	std::string title;
	std::string director;
	int year;	
	float rating;

	public:
	dbElement();
	dbElement(std::string, std::string, int, float);
	std::string getTitle();
	std::string getDirector();
	int getYear();
	float getRating();
	std::void setTitle(std::string);
	std::void setDirector(std::string);
	void setYear(int);
	void setRating(float);
};

#endif  
