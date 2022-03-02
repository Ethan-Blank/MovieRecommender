#ifndef __USER__
#define __USER__
#include "../header/dbElement.hpp"
#include "../header/library.hpp"
#include "../header/searchCriteria.hpp"
#include <string>
#include <vector>

class user {
    private:
	std::vector<std::string> fav_directors;
	std::vector<std::string> fav_genres;
	std::vector<std::string> watch_history;
	string username;
	string password;
    public:
	std::vector<std::string> getFavDirectors();
	std::vector<std::string> getFavGenres();
	std::vector<std::string> getWatchHistory();
	std::string getUsername();
	std::string getPassword();
	void setFavDirectors(std::vector<std::string>);
	void setFavGenres(std::vector<std::string>);
	void addWatchedMovie(std::string);
	void setUsername(std::string);
	void setPassword(std::string);
};

#endif

