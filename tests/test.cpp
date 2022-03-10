#include "../header/library.hpp"
#include "../header/recommender.hpp"
#include "../header/dbElement.hpp"
#include "../header/user.hpp"
#include "../header/searchRecommender.hpp"
#include "../header/searchByGenre.hpp"
#include "../header/searchByDirector.hpp"
#include "../header/searchByTitle.hpp"
#include "../header/recByPref.hpp"
#include "../header/recByDir.hpp"
#include "gtest/gtest.h"
#include <vector>

#include "lib_test.cpp"
#include "sc_test.cpp"
#include "rec_test.cpp"
#include "user_test.cpp"
#include "recommender_tests.cpp"
#include "srec_test.cpp"
#include "search_director_test.cpp"
#include "search_genre_test.cpp"
#include "search_title_test.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

