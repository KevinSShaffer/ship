#ifndef WATER_VEHICLE_H
#define WATER_VEHICLE_H

#include "Vector.h"

class WaterVehicle
{
public:
	enum Orientation { HORIZONTAL, VERTICAL };
private:
	unsigned int _length;
	Vector _location;
	Orientation _orientation;
};
#endif