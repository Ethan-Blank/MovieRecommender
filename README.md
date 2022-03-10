# Movie Recommender
> Authors: Nanma Pillai(https://github.com/nanmasp), Owen Ribera(https://github.com/TheLadd), Michael Deriss(https://github.com/MichaelJDeriss), Ethan Blank(https://github.com/Ethan-Blank) 

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include:
 > * Why is it important or interesting to you?
 >   * Project provides an opportunity to learn a GUI framework
 >   * Project provides a utility that all group members find useful 
 >   * Project provides an opportunity for creativity
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [toolname](link) - Short description
 >   * C++ 
 >   * GitHub
 >   * Qt (https://www.qt.io/) - A C++ GUI framework
 > * What will be the input/output of your project? What are the features that the project provides?
 >   * Input: IMDb Datasets, User Input, User Application History, Item Popularity
 >   * Output: A custom selection of movies and details for those movies (most notably, what platforms movies are available one)
 >   * Features: Manipulation of search criteria, tracking of user-history (intra-application), a GUI
 > This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 
 > 
 > You also need to set up an empty project board by choosing the  “Automated kanban with review” option on Github. You should also have a Backlog and In testing columns added.
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to:
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller actionable development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 8. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 > **Class diagram** 
 >  [Phase3UMLDiagram.pdf](https://github.com/cs100/final-project-npill005-eblan012-oribe001-mderi004/files/8129654/Phase3UMLDiagram.pdf)
   **Description**
   The Library class is aggregated out of Movies and composed out of a GUI, and it will depend on SearchCriteria as a parameter for methods. The GUI is a class with an int height, int width, and string color. The GUI class also aggregates out User class, via the recentlyWatched member. The Reccomender class will depend on the User's recentlyWatched member as a parameter for methods.  
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with a reader (using Calendly). Your entire team must be present. This meeting will occur on week 8 but NOT during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design pattern(s) did you use? For each pattern you must explain in 4-5 sentences:


 >     We are using a strategy pattern. We think it will make our code better because it keeps everyone on the same page upfront on the developer side, and will give the user          more flexibility with their reccomendations. We are making our reccomend() function implemented under the Strategy pattern. We picked it because we saw it as a practical 
 >     design choice to achieve the aforementioned outcomes.
 >     


 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design pattern(s) you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
