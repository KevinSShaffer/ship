*******************************************************
*  Name      :  Kevin Shaffer
*  Student ID:  106069743
*  Class     :  CSCI 2312-001        
*  HW#       :  3
*  Due Date  :  Sep 26th, 2017
*******************************************************

## Read Me


*******************************************************
   Description of the program
*******************************************************

This application allows the user to create and place a
submarine on a grid before torpedo shots are randomly 
generated.  The successful shots and the sinking of 
the sub are output as well as the member properties 
of a memberwise clone of the original submarine.


*******************************************************
   Source files
*******************************************************
Name:  main.h
  Contains the definitions for the main methods.

Name:  main.cpp
  Main program.  This is the driver program that takes
  the user's input and uses it to create the submarine
  object and handles the output.

Name:  position.h
  Contains the definitions for the Position namespace
  which includes the Coordinates class and Orientation
  enum.

Name:  position.cpp
  Contains the member functions for the coordinates
  class.

Name:  water_vehicle.h
  Contains the definitions for the WaterVehicle base
  class.

Name:  water_vechicle.cpp
  Contains the implementation of the WaterVechile
  class.

Name:  submarine.h
  Contains the definitions for the Submarine class
  derived from the WaterVehicle.

Name:  submarine.cpp
  Contain the implemntation of the Submarine class.
   
   
*******************************************************
   Circumstances of programs
*******************************************************

   The program runs successfully.
   
   The program was developed using the sublime text
   editor and compiled using gcc version egcs-2.91.57.

   The program was also tested by compiling and running
   on CSEGrid.

   This application lives in an open source repository
   at https://github.com/KevinSShaffer/ship


*******************************************************
   How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip ShafferHW3.zip

   Now you should see:
    Directory named 'grid' with the files:
      main.h
      main.cpp
      grid.h
      grid.cpp
      makefile
      README.md
    Directory named 'ship' with the files:
      main.cpp
      main.h
      position.cpp
      position.h
      README.md
      makefile
      submarine.cpp
      submarine.h
      water_vehicle.cpp
      water_vehicle.h

2. Build the program.
    Change to the directory that contains the file by:
    % cd ship 

    Compile the program by:
    % make

3. Run the program by:
   % ./ship

4. Delete the obj files, executables, and core dump by
   % make clean