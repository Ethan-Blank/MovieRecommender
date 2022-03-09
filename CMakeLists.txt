CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

SET(CMAKE_CXX_STANDARD 11)

#ADD_SUBDIRECTORY(libs/wdWidgets)

#ADD_EXECUTABLE(MovieRec
#        src/Menu
#)

#target_link_libraries(MovieRec wx::net wx::core wx::base)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(test
	tests/test.cpp
	src/dbElement.cpp
	src/library.cpp
	src/searchCriteria.cpp
	src/user.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

