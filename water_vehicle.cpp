
#include "water_vehicle.h"
#include "position.h"

WaterVehicle::WaterVehicle(Position::Coordinates coordinates, Position::Orientation orientation, unsigned int length) :
	_coordinates(coordinates), _orientation(orientation),
{
	if (length == 0)
		throw "Ship length must be greater than 0";
}

Position::Coordinates WaterVehicle::GetCoordinates()
{
	return _coordinates;
}
void WaterVehicle::SetCoordinates(Position::Coordinates coordinates)
{
	_coordinates = coordinates;
}
Position::Orientation WaterVehicle::GetOrientation()
{
	return _orientation;
}
void WaterVehicle::SetOrientation(Position::Orientation orientation)
{
	_orientation = orientation;
}
unsigned int WaterVehicle::GetLength()
{
	return _length;
}
bool WaterVehicle::IsSunk()
{
	// assuming _length can't be 0
	return _hits == _length;
}