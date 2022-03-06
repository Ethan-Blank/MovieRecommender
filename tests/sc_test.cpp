#ifndef __SEARCH_TESTS__
#define __SEARCH_TESTS__

#include "../header/searchCriteria.hpp"

TEST(searchCritera, validGetter) {
	std::string title = "Some Movie"; 
	std::string director = "Some director";
	std::vector<std::string> genres = {"Action"};
	SearchCriteria sc(title, director, genres);

	EXPECT_EQ(sc.getTitle(), title);
	EXPECT_EQ(sc.getDirector(), director);
	EXPECT_EQ(sc.getGenres(), genres);
}

TEST(searchCritera, invalidGetter) {
	std::string title = "Some Movie"; 
	std::string director = "Some director";
	std::vector<std::string> genres = {"Action"};
	SearchCriteria sc(title, director, genres);

	EXPECT_NE(sc.getTitle(), "life");
	EXPECT_NE(sc.getDirector(), "owen" );
	EXPECT_EQ(sc.getGenres(), genres);
}
#endif
