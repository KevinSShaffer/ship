
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "main.h"
#include "position.h"
#include "submarine.h"
#include "..\grid\grid.h"

using namespace std;

int main()
{
	srand(time(0));
	int x, y, length, depth, grid_x = 10, grid_y = 10;
	Position::Orientation orientation;

	do
	{
		x = getInput("Enter the x coordinate: ");
		y = getInput("Enter the y coordinate: ");
		length = getInput("Enter the length: ");
		depth = getInput("Enter the dive depth in meters: ");
		orientation = getOrientation();
	} while (!isValid(orientation, x, y, length, grid_x, grid_y));



	cout << "Press a key to exit: ";
	cin >> x;
	return 0;
}
int getInput(string question)
{
	int value = 0;

	// loop until user provides valid integer input 
	while (!value || value < 1)
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
	if (orientation == Position::HORIZONTAL)
		return x + length <= max_x && y <= max_y;
	else
		return x <= max_x && y + length <= max_y;
}