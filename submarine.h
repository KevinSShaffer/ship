/********************************************************************
*  Name        :  Kevin Shaffer
*  Student ID  :  106069743
*  Class       :  CSCI 2312-001        
*  HW#         :  3
*  Due Date    :  Sep 26th, 2017
*  Description :  Contains the definitions for the Submarine class
  				  derived from the WaterVehicle.
********************************************************************/

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
	unsigned int GetDepth() const;
	void SetDepth(unsigned int depth);
	bool IsSurfaced() const;
	Submarine& operator=(const Submarine& other);
private:
	unsigned int _depth;
};

#endif