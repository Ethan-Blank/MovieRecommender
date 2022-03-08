#include "../header/library.hpp"
#include "gtest/gtest.h"

#include "lib_test.cpp"
#include "sc_test.cpp"
#include "rec_test.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
