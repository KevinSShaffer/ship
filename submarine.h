#ifndef SUBMARINE_H
#define SUBMARINE_H

#include "water_vehicle.h"

class Submarine : public WaterVehicle
{
public:
	Submarine(Position::Coordinates coordinates, Position::Orientation orientation, unsigned int length) :
		WaterVehicle(coordinates, orientation, length), _depth(0) { }
	Submarine(Position::Coordinates coordinates, Position::Orientation orientation, unsigned int length, unsigned int depth) :
		WaterVehicle(coordinates, orientation, length), _depth(depth) { }
	unsigned int GetDepth();
	void SetDepth(unsigned int depth);
	bool IsSurfaced();
private:
	unsigned int _depth;
};

#endif