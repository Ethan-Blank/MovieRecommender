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
	std::string username;
	std::string password;
    public:
    user();
    user(std::string);
    //user(std::string, std::string, std::vector<std::string>, std::vector<std::string>, std::vector<std::string>);
    user(std::string, std::string, std::vector<std::string> = {}, std::vector<std::string> = {}, std::vector<std::string> = {});
	std::vector<std::string> getFavDirectors();
	std::vector<std::string> getFavGenres();
	std::vector<std::string> getWatchHistory();
	std::string getUsername();
	std::string getPassword();
	void setFavDirectors(std::vector<std::string>);
	void setFavGenres(std::vector<std::string>);
	void setWatchHistory(std::vector<std::string>);
	void addWatchedMovie(std::string);
	void addFavDirectors(string::string);
	void addFaveGenres(std::string);
	void setUsername(std::string);
	void setPassword(std::string);
  	void removeFavDirectors(std::string);
	void removeGenres(std::string);
	void removeWatchedMovie(std::string);
  void saveData();
  user readData(std::string);
};
#endif

