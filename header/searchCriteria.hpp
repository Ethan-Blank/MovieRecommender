#ifndef __SEARCH_HPP__
#define __SEARCH_HPP__

#include<vector>
#include<string>

class SearchCriteria {
	std::string title;
	std::string director;
	std::vector<std::string> genres;

	public:
	SearchCriteria(std::string, std::string, std::vector<std::string>);
	SearchCriteria();

	// Getters
	std::string getTitle();
	std::string getDirector();
	std::vector<std::string> getGenres();

	// Setters
	void setTitle(std::string);
	void setDirector(std::string);
	void setGenres(std::vector<std::string>);
};

#endif
