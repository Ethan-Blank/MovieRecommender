# Movie Recommender
> Authors: [Nanma Pillai](https://github.com/nanmasp), [Owen Ribera](https://github.com/TheLadd), [Michael Deriss](https://github.com/MichaelJDeriss), [Ethan Blank](https://github.com/Ethan-Blank) 

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include:
 > * Why is it important or interesting to you?
 >   * Project provides an opportunity to learn a GUI framework
 >   * Project provides a utility that all group members find useful 
 >   * Project provides an opportunity for creativity
 
 ### What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
> * `Valgrind` - an instrumentation framework for building dynamic analysis tools   (assists in finding and checking memory leaks)
> * `C++` - the main programming language that will be utilized in this project.
> * `Git/Github` - git is a local version control program that interfaces with Github, a remote repository.
> * `GoogleTest` - a testing framework for C++ code
> * `CMake`- allows for easier compilation and testing
 
 ### What will be the input/output of your project? What are the features that the project provides?
 >   * Input: IMDb Datasets, User Input, User Application History, Item Popularity
 >   * Output: A custom selection of movies and details for those movies (most notably, what platforms movies are available one)
 >   * Features: Manipulation of search criteria, tracking of user-history (intra-application), a GUI
  
 ### Desgin Pattern
 >  * We are using a strategy pattern. We think it will make our code better because it keeps everyone on the same page upfront on the developer side, and will give the user          more flexibility with their reccomendations. We are making our reccomend() function implemented under the Strategy pattern. We picked it because we saw it as a practical design choice to achieve the aforementioned outcomes.
 

## Class Diagram
 >  [Phase3UMLDiagram.pdf](https://github.com/cs100/final-project-npill005-eblan012-oribe001-mderi004/files/8129654/Phase3UMLDiagram.pdf)
   **Description**
   The Library class is aggregated out of Movies and composed out of a GUI, and it will depend on SearchCriteria as a parameter for methods. The GUI is a class with an int height, int width, and string color. The GUI class also aggregates out User class, via the recentlyWatched member. The Reccomender class will depend on the User's recentlyWatched member as a parameter for methods.    
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
