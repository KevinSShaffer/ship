/********************************************************************
*  Name        :  Kevin Shaffer
*  Student ID  :  106069743
*  Class       :  CSCI 2312-001        
*  HW#         :  3
*  Due Date    :  Sep 26th, 2017
*  Description :  Contains the definitions for the main methods.
********************************************************************/

#include "position.h"
#include <string>

int getInput(std::string question);
Position::Orientation getOrientation();
bool isValid(Position::Orientation orientation, int x, int y, int length, int max_x, int max_y);