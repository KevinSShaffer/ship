
#include "position.h"
#include <string>

int getInput(std::string question);
Position::Orientation getOrientation();
bool isValid(Position::Orientation orientation, int x, int y, int length, int max_x, int max_y);