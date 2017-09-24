#ifndef SUBMARINE_H
#define SUBMARINE_H

#include "water_vehicle.h"

class Submarine : public WaterVehicle
{
public:
private:
	unsigned int _depth;
	bool _surfaced;
};

#endif