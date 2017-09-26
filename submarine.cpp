/********************************************************************
*  Name        :  Kevin Shaffer
*  Student ID  :  106069743
*  Class       :  CSCI 2312-001        
*  HW#         :  3
*  Due Date    :  Sep 26th, 2017
*  Description :  Contain the implemntation of the Submarine class.
********************************************************************/

#include "submarine.h"
#include "position.h"

// Submarine::Submarine(Position::Coordinates coordinates, Position::Orientation orientation, unsigned int length) :
// 	WaterVehicle(coordinates, orientation, length) { }

unsigned int Submarine::GetDepth() const
{
	return _depth;
}
void Submarine::SetDepth(unsigned int depth)
{
	_depth = depth;
}
bool Submarine::IsSurfaced() const
{
	return _depth == 0;
}
Submarine& Submarine::operator=(const Submarine& other)
{
	if (&other == this)
		return *this;
	//return Submarine(GetCoordinates(), GetOrientation(), GetLength(), _depth);
}