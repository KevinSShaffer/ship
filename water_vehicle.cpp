
#include "water_vehicle.h"
#include "position.h"

WaterVehicle::WaterVehicle(Position::Coordinates coordinates, Position::Orientation orientation, unsigned int length) :
	_coordinates(coordinates), _orientation(orientation), _length(length) { }