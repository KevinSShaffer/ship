
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
	return _hits == _length; // assumes _length != 0
}
bool WaterVehicle::IsHit(Position::Coordinates coordinates)
{
	Position::Coordinates shipCoordinates = _coordinates;

	for (int i = 0; i < _length; i++)
	{
		if (shipCoordinates == coordinates)
			return true;
		else if (_orientation == Position::Orientation::HORIZONTAL)
			shipCoordinates.X++;
		else
			shipCoordinates.Y++;
	}

	return false;
}