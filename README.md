 # TaskPro
 
 Authors: [Faris Mohammady](https://github.com/faris-mohammady),
           [Banff Jiang](http://github.com/banffjiang),
           [Cathy Wu](http://github.com/catheiwu),
           [Xiaopei Wang](http://gitHub.com/seanxpw)

## Motive
   As a university student or student in general, it is extremely important to schedule your upcoming assignments and events well, as it can be stressful when not planned properly. Having a tool that organizes your tasks cleanly minimizes stress levels and allows students to appropriately focus on what's ahead of them.
## Tools/Description
   We plan to entirely code this project in C++. We will use VSCode to code, and GitHub to collaborate with our team and keep track of what each person is doing. 
   The user of our tool will input a list of tasks that they want to keep track of. The output will be their lists of tasks they have to do and the date they have to complete them. 
   In this application, users can create separate lists with different subtasks in them. For example, a user can create a task list to study for an upcoming midterm and have the subtasks be to complete study guide, review lecture notes, and review past assignments. Additionally, the tasks are labeled with the date they were created, and a date to complete them by. 
   Implement features where users can easily delete and add their custom tasks
   Implement a sort feature by highest priority (closest due date)
 

<!-- 
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` (aka Sprint Backlog) column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots on Tuesday of week 6. The check-ins will occur on Zoom. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members -->
## User Interface Specification

 ![image](https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/146904259/83fb93d8-f361-4e9d-8ac7-7cd16fe54b6c)


## Class Diagram
![Class Diagram Template (2)](https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/146904259/d28424c5-45c6-452b-8281-98de62a60dbc)

The 'Tasklist' class serves as a container or manager for tasks. It includes methods such as adding, removing, and retrieving tasks within the list. Its association with the 'Task' class is composition as it manages instances of tasks.

The 'Task' class represents a generic task in the system with attributes such as a task name, description, and priority. It's inherited by two subclasses, 'Subtask' and 'MainTask'.

The 'Subtask' class is a subclass of the 'Task' class, meaning it inherits properties and behaviors from the 'Task' class. 

The 'MainTask' is another subclass of the 'Task' class, representing larger, overarching tasks that may be composed of subtasks.

## Screen Layouts
<img width="245" alt="Welcome screen" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/9482a808-415c-455d-a2d0-b2f6e73ab21d">
<img width="552" alt="Add Task1 (study finals)" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/fd5bd208-7637-4be3-beae-338292fbaad3">
<img width="551" alt="Add Task2 (pack for winter break)" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/8a00adce-ea74-468b-8d8e-d920f7ff762f">
<img width="539" alt="Add Task3 (chores)" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/ab9413a5-4883-4761-a2a1-592f533b3111">
<img width="704" alt="Add subtask1 (vacuum)" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/fca25282-a758-4252-87f5-f825c8d8d8e2">
<img width="695" alt="Add subtask2 (laundry)" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/744bdf1e-a746-4714-8067-a9a495ea5f9a">
<img width="694" alt="Edit priority (none --  2)" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/ce27e71a-d2de-4c56-8f34-8f5d01b08405">
<img width="685" alt="Sort by priority" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/9fb02081-d1d0-444f-a5d5-8802f0fee527">
<img width="684" alt="before sort by priority" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/2fb8f332-f813-4943-a41c-2d0574ce56c4">
<img width="691" alt="after sort by priority" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/000c2052-843d-4570-a6bd-ac4af5e29306">
<img width="682" alt="Sort by deadline" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/4d62b709-911c-4ab9-a072-f753ee3936f2">
<img width="678" alt="post sort by deadline" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/33db1cb8-7989-4cd8-8b10-a3a31f7835bc">
<img width="703" alt="delete subtask" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/906f3808-0b1b-4942-a315-e63c100fea4c">
<img width="678" alt="post delete subtask" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/4990d939-bb1c-4498-9e2b-3ee47848a948">
<img width="355" alt="export tasks" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/4f2cdac0-bc7d-4ccf-a801-ee1dba805217">
<img width="405" alt="txt file" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/607c5b07-5434-491a-8198-2e50784f89ff">
<img width="681" alt="delete task" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/9c0685c5-c76e-46de-a162-7c1bd8c4b2c0">
<img width="679" alt="post delete task" src="https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/assets/121990200/a6abd610-2998-4fa1-9a55-c9e40d918b50">






<!-- ## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
## Phase III -->
For the Deadline, Description, and Priority classes we followed the single responsibility principle by having each class only implement one feature. For example, the Deadline class only implements the "deadline" feature and the Priority class only implements the "priority" feature. Furthermore, to ensure that each class only has one responsibility, we created a Subtask class to separate the responsibilities of modifying tasks and subtasks. Both task and subtask classes will directly use the Deadline, Description, and Priority features classes. Originally, we had an object of type Taskist * taskList in the MainMenu class, but we moved it to the Tasklist class since it violated the interface segregation principle. Since the main menu did not have to use taskList, we moved it to the TaskList class to make sure we were complying with this guideline.
 
 <!-- ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history.
-->
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 ### Option 1: Build From source.
1) Clone this GitHub repository by copying the hyperlink from the green "code" button on the upper right (code-->local-->https) into the following command:
```
    git clone --recursive https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571.git
```
Or you can get the source from our release.

2) Once you have this repo cloned, type these commands into the terminal in the following order:
```
     1. cd build
     2. cmake ..
     3. make
     4. ./bin/TaskPro.out
```
3) Then, this program should run! Keep in mind you only have to run cmake and make once, then you can just run
```
    ./bin/TaskPro.out
```
4) Use this task manager to add, delete, and edit tasks in your upcoming schedule. Additional features include creating subtasks within a task and sorting lists of tasks by their priorities or deadlines. A display feature allows users to view their list of tasks.
### Option 2: Download Executable File
In the [release](https://github.com/cs100/final-project-fmoha020-cwu247-bjian018-xwang571/releases/tag/1.0.0) we've compiled an executable file for you! If you use Linux, simply download the TaskPro.out and run it.
## Tesing
We used gtest to test all of our classes: MainTask.cpp, Task.cpp, and TaskList.cpp. Additionally, we also used Continuous integration (CI) by GitHub Actions.

