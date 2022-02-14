CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(libs/wdWidgets)

ADD_EXECUTABLE(MovieRec
        src/Menu
)

target_link_libraries(MovieRec wx::net wx::core wx::base)
