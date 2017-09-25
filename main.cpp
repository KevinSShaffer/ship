
#include <iostream>
#include <string>
#include "main.h"
#include "position.h"
#include "submarine.h"

using namespace std;

int main()
{	
	int x = getInput("Enter the x coordinate: "),
		y = getInput("Enter the y coordinate: "),
		length = getInput("Enter the length: "),
		depth = getInput("Enter the dive depth in meters: ");
	Position::Orientation orientation = getOrientation();



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
	char letter;

	do
	{
		cout << "Horizontal (h) or Verical (v) orientation: " << endl;
		cin >> letter;
		cin.clear();
		cin.ignore(256, '\n');
	} while (!letter || letter != 'h' || letter != 'H' || letter != 'v' || letter != 'V');

	return ((letter == 'h' || letter == 'H') ? Position::HORIZONTAL : Position::VERTICAL);
}