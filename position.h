#ifndef POSITION_H
#define POSITION_H

namespace Position
{
	enum Orientation { HORIZONTAL, VERTICAL };
	struct Coordinates
	{
		int X;
		int Y;
		bool operator==(const Coordinates other);
		Coordinates(int x, int y);
	};	
}

#endif