#ifndef __REC_TESTS__
#define __REC_TESTS__

#include "../header/recommender.hpp"

TEST(RecTests, URtest1) {
	concRec1 conc;	
	user u;
	Library r("imdb.movie.database.txt");
	
	r.acceptUR(&conc, &u);
	EXPECT_EQ(true, true);
}


#endif
