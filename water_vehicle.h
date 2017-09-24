#ifndef WATER_VEHICLE_H
#define WATER_VEHICLE_H

#include "position.h"

class WaterVehicle
{
public:
	WaterVehicle(Position::Coordinates coordinates, Position::Orientation orientation, unsigned int length);
private:
	Position::Coordinates _coordinates;
	Position::Orientation _orientation;
	unsigned int _length;
	bool _sunk;
};
#endif