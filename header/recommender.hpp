#ifndef __RECOMMENDER__
#define __RECOMMENDER__
#include "../header/dbElement.hpp"
#include "../header/library.hpp"
#include "../header/searchCriteria.hpp"
#include "../header/user.hpp"
#include <string>
#include <vector>

using namespace std;

class recommender {
    private:
	vector<dbElement> user_rec_list;
	vector<dbElement> genre_rec_list;
	vector<dbElement> director_rec_list;
	vector<dbElement> recently_watched;

	vector<dbElement> sortByRating(vector<dbElement>);

    public:
	Recommender(vector<dbElement>, vector<dbElement>, vector<dbElement>, vector<dbElement>);
	Recommender();

	// Getters
	vector<dbElement> getUserList();
	vector<dbElement> getGenreList();
	vector<dbElement> getDirectorList();
	vector<dbElement> getRecentlyWatchedList();

	// Setters
	void setUserList(vector<dbElement);
	void setGenreList(vector<dbElement>);
	void setDirectorList(vector<dbElement>);
	void setRecentlyWatchedList(vector<dbElement>);

	void sortUserList();
	void sortGenreList();
	void sortDirectorList();
};
