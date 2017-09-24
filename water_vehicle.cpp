
#include "water_vehicle.h"
#include "position.h"

WaterVehicle::WaterVehicle(Position::Coordinates coordinates, Position::Orientation orientation, unsigned int length) :
	_coordinates(coordinates), _orientation(orientation), _length(length) { }

Position::Coordinates WaterVehicle::GetCoordinates()
{
	return _coordinates;
}
void WaterVehicle::SetCoordinates(Position::Coordinates coordinates)
{
	_coordinates = coordinates;
}
Position::Orientation GetOrientation()
{
	return _orientation;
}
void WaterVehicle::SetOrientation(Position::Orientation orientation)
{
	_orientation = orientation;
}
unsigned int GetLength()
{
	return _length;
}