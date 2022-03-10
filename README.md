# Movie Recommender
Authors: [Nanma Pillai](https://github.com/nanmasp), [Owen Ribera](https://github.com/TheLadd), [Michael Deriss](https://github.com/MichaelJDeriss), [Ethan Blank](https://github.com/Ethan-Blank) 

## Project Description
This application stores a list of movies along with their genre(s), director, release year, and imdb rating.  It also stores the users' favorite genres and directors.  The application uses this information to recommend movies to the user.  The application also allows the user to search for movies based on their genre, director, or title.
 
 ### Langauges/Tools/Technologies:
* `Valgrind` - an instrumentation framework for building dynamic analysis tools   (assists in finding and checking memory leaks)
* `C++` - the main programming language that will be utilized in this project.
* `Git/Github` - git is a local version control program that interfaces with Github, a remote repository.
* `GoogleTest` - a testing framework for C++ code
* `CMake`- allows for easier compilation and testing
 
 ### Input/Output 
 * Input: IMDb Datasets, User Input, 
 * Output: A custom selection of movies and details for those movies
  
 ### Desgin Pattern
 * We are using a strategy pattern. We think it will make our code better because it keeps everyone on the same page upfront on the developer side, and will give the user          more flexibility with their reccomendations. We are making our reccomend() function implemented under the Strategy pattern. We picked it because we saw it as a practical design choice to achieve the aforementioned outcomes.
 

## Class Diagram
 ![Strat](/images/uml.jpeg)
   **Description**
   The Library class is aggregated out of Movies and composed out of a GUI, and it will depend on SearchCriteria as a parameter for methods. The GUI is a class with an int height, int width, and string color. The GUI class also aggregates out User class, via the recentlyWatched member. The Reccomender class will depend on the User's recentlyWatched member as a parameter for methods.    
 
 ## Screenshots
 Screenshots of the input/output after running your application
 ## Installation/Usage
 1. To use this program, it requires a few simple requriements to be installed and that's it.
 2. Clone this repository recursively (it should include googletest).
 4. In order to run, simply run `cmake .` or if on hammer `cmake3 .`
 5. Then compile with `make`.
 6. You should have your compiled files ready now. To run the tests simply type `./test`. To run the program run `./recommend`.
  
 ## Testing
 To test the program, we created specialized unit tests to test the most important parts of the program. We made sure all of them passed before proceeding on working on other items. We made sure to test after every change. To check the tests you simply run `./test` after compiling with cmake. Additionally we did extensive user testing on out menu so ensure that the user is reciving the right output. We also made sure to check the valgrind report (depicted below) by running `valgrind ./test`. 
 ![test](/images/testing1.jpg)
 ![test2](/images/testing2.jpg)
 
 
