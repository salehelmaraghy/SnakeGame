# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.


## CC Attribution-ShareAlike 4.0 International


Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg


# Rubric Items Matched

### 1

### `Loops, Functions, I/O - The project accepts user input and processes the input.`

> The project accepts input from a user as part of the necessary operation of the program.

A new feature is added to the code, that the snake speed can be changed in a ranger between 0.1 to 1.0 as per a value input from the user before the game start,
The Game class is modified to include a member function "ChangeInitalSpeed" which is called at the main function before the Game Run method is called.
The Game Class method "ChangeInitalSpeed" is modifing the Snake speed by calling a new introduced method in the Snake Class "SetInitialSpeed" 
which scan an input from the user, and check if it's within a range or not, then assign it to the private member "Speed" to change the Snake speed.


### 2

### `Object Oriented Programming - The project uses Object Oriented Programming techniques.`

> The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.

For this rubic item requirement, and new file is introduced "platformData.cpp" and "PlatformData.h" which have the `PlatfrmData` class
The Platform data class holds information about the current used game platform.
 The class uses the member functions `getPlatform` and `printPlatform` to fetch and printout the user's detected system platform.

### 3

### `Object Oriented Programming - Classes use appropriate access specifiers for class members.`

> All class data members are explicitly specified as public, protected, or private.

The methods are public methods to be used by different classess and different files, also the attibutes are private so it cannot be accessed by any class instance.

### 4

### `Object Oriented Programming - Class constructors utilize member initialization lists.`

> All class members that are set to argument values are initialized through member initialization lists.

In the `platformData.cpp` the constructor uses the initalizer list and initalize the variable "currentPlatform" to Null.

### 5

### `Object Oriented Programming - Classes abstract implementation details from their interfaces.`

> > All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.

All the function names are descriptive and if it needs more clarrification a comment is added



