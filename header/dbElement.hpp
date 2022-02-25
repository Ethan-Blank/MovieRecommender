#ifndef __DB_ELEM__
#define __DB_ELEM__
#include<string>
#include<vector>

class dbElement {
	private:
	std::string title;
	std::string director;
	std::vector<std::string> genres;
	int year;	
	float rating;

	public:
	dbElement();
	dbElement(std::string, std::string, int, float);
	std::string getTitle();
	std::string getDirector();
	int getYear();
	float getRating();
	void setTitle(std::string);
	void setDirector(std::string);
	void setGenres(std::vector<std::string>);
	void setYear(int);
	void setRating(float);
};

#endif  
