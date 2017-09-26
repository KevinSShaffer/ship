#ifndef WATER_VEHICLE_H
#define WATER_VEHICLE_H

#include "position.h"

class WaterVehicle
{
public:
	WaterVehicle(Position::Coordinates coordinates, Position::Orientation orientation, unsigned int length);
	Position::Coordinates GetCoordinates() const;
	void SetCoordinates(Position::Coordinates coordinates);
	Position::Orientation GetOrientation() const;
	void SetOrientation(Position::Orientation orientation);
	unsigned int GetLength() const;
	bool IsSunk() const;
	bool IsHit(const Position::Coordinates& coordinates);
private:
	Position::Coordinates _coordinates;
	Position::Orientation _orientation;
	unsigned int _length;
	unsigned int _hits;
};
#endif