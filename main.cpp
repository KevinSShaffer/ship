
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "main.h"
#include "position.h"
#include "submarine.h"
#include "../grid/grid.cpp"

using namespace std;

int main()
{
	Grid grid(10, 10, time(0));
	int x, y, length, depth;
	Position::Orientation orientation;

	do
	{
		x = getInput("Enter the x coordinate: ");
		y = getInput("Enter the y coordinate: ");
		length = getInput("Enter the length: ");
		depth = getInput("Enter the dive depth in meters: ");
		orientation = getOrientation();
	} while (!isValid(orientation, x, y, length, grid.getRows(), grid.getColumns()));

	Submarine submarine(Position::Coordinates(x, y), orientation, length, depth);

	grid.Randomize(75);

	cout << "Fifteen torpedo shots: " << endl;
	cout << grid.ToString() << endl;

	for (int y = 0; y < grid.getRows(); y++)
		for (int x = 0; x < grid.getColumns(); x++)
		{
			if (grid[y][x] && submarine.IsHit(Position::Coordinates(x, y)))
			{
				cout << "Hit at " << x << ", " << y << endl;

				if (submarine.IsSunk())
					cout << "You sunk my submarine!!!" << endl;
			}
		}

	cout << "Press a key to exit: ";
	cin >> x;
	return 0;
}
int getInput(string question)
{
	int value = -1;

	// loop until user provides valid integer input 
	while (value < 0)
	{
		cout << question << endl;
		cin >> value;
		cin.clear();
		cin.ignore(256,'\n');
	}

	return value;
}
Position::Orientation getOrientation()
{
	char letter = '\0';
	do
	{
		cout << "Horizontal (h) or Verical (v) orientation: " << endl;
		cin >> letter;
		cin.clear();
		cin.ignore(256, '\n');
	} while (!letter || letter != 'h' && letter != 'H' && letter != 'v' && letter != 'V');

	return ((letter == 'h' || letter == 'H') ? Position::HORIZONTAL : Position::VERTICAL);
}
bool isValid(Position::Orientation orientation, int x, int y, int length, int max_x, int max_y)
{
	length--;
	if (orientation == Position::HORIZONTAL)
		return x + length < max_x && y < max_y;
	else
		return x < max_x && y + length < max_y;
}