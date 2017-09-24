
#include "submarine.h"
#include "position.h"

// Submarine::Submarine(Position::Coordinates coordinates, Position::Orientation orientation, unsigned int length) :
// 	WaterVehicle(coordinates, orientation, length) { }

unsigned int Submarine::GetDepth()
{
	return _depth;
}
void Submarine::SetDepth(unsigned int depth)
{
	_depth = depth;
}
bool Submarine::IsSurfaced()
{
	return _depth == 0;
}