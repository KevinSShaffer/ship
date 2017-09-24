#ifndef WATER_VEHICLE_H
#define WATER_VEHICLE_H

#include "Coordinate.h"

class WaterVehicle
{
public:
	enum Orientation { HORIZONTAL, VERTICAL };
private:
	unsigned int _length;
	Coordinate _location;
	Orientation _orientation;
	bool _sunk;
};
#endif