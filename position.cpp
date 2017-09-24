
#include "position.h"

bool Coordinates::operator==(const Coordinates other)
{
	return X == other.X && Y == other.Y;
}