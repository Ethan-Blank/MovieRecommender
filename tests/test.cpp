#include "../header/library.hpp"
#include "../header/recommender.hpp"
#include "../header/dbElement.hpp"
#include "../header/user.hpp"
#include "gtest/gtest.h"
#include <vector>

#include "lib_test.cpp"
#include "sc_test.cpp"
#include "rec_test.cpp"
#include "user_test.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
