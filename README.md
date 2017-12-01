# ProjectZero
##URGENT!
####Add notes here for urgent matters all group members should see
Nothing (in particular) at the moment. Hell-week is upon us, and all is urgent.

##Intro
This is just a quick over-view of how the project is sorted, how the main and make files are sorted, and any other details we choose to shove here for now. Anyone can edit this as needed.
#####General notes
Where needed, contributors are sorted alphabetically by initials (including in Makefile and main.cpp include lists). Subdirectories are sorted this way anyway, and it standardizes ordering. 

##File structure
#####General notes
Each subdirectory has a directory for individual contributor work. Any shared resources will be in the main subdirectory or given their own directory. ProjectZero/ holds only the Makefile and README
###doc
Contributor subdirectories. At the moment this README will hold any group notes.
Holds documentation including gantt charts, class diagrams, sequence diagrams, and any stand-alone module documentation.
###inc
Contributor subdirectories. main.h will go here if we end up needing it
Holds public header files for modules. No official policy, but the group seems to prefer documentation in header comments. 
###src
Contributor subdirectories. main.cpp goes here
Holds source files for modules.
###tst
Contributor subdirectories. Catch subdirectory.
Holds test suites. All group members currently using Catch. Catch subdirectory holds catch.hpp, tests-main.cpp, and tests-main.o when it exists. 
Catch is a single header testing framework. It requires one and only one source file which includes the line
#define CATCH_CONFIG_MAIN
tests-main.cpp has this line, header-guarded. compiling catch.hpp is resource heavy, so the object file is preserved here to speed up test suite compilation

##Makefile
The Makefile contains the following subsections:
####Variables
This holds general variables (compile command, main library location, list of lists of objects), as well as subsections for testing and individual contributors.
Contributors each have the following: a list of object files to generate, a library location, and a source location

####Directives
General directives:
-all: generates and runs, cleans .o files
-test: generates and runs all tests, cleans .o files
-clean: removes all .o files
-clean_exe: removes fss and then all test executables
-clean_all: runs clean and then clean_exe

Each contributor has the following directives in their section:
-All object directives
-Tests object directive that creates their tests
-Test_build whcih creates their test executables
-Test which creates and runs their tests, cleaning all object files

##Coding standards
Taken from class powerpoint. As follows:
Constants in ALL_CAPS with underscores
camelCase for everything else
Classes start in caps
Member variables start with m
Static member variables start with s
Descriptive english names
getVar setVar member functions

