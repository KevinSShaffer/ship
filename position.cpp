
#include "position.h"

Position::Coordinates::Coordinates(int x, int y) :
	X(x), Y(y)
{ }
bool Position::Coordinates::operator==(const Position::Coordinates other)
{
	return X == other.X && Y == other.Y;
}