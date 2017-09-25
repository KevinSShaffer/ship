
#include "position.h"

bool Position::Coordinates::operator==(const Position::Coordinates other)
{
	return X == other.X && Y == other.Y;
}