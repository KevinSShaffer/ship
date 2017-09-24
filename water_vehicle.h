#ifndef WATER_VEHICLE_H
#define WATER_VEHICLE_H

#include "Coordinate.h"

class WaterVehicle
{
public:
	enum Orientation { HORIZONTAL, VERTICAL };
	unsigned int GetLength();
	void SetLength(unsigned int length);
	Coordinate GetLocation();
	void SetLocation(Coordinate vector);

private:
	unsigned int _length;
	Coordinate _location;
	Orientation _orientation;
};
#endif