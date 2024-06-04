#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

#include "screen.h"
#include "plane.h"

using namespace std;

const size_t screenSizeX = 100;
const size_t screenSizeY = 21;


void screen::printGame(plane& Drone,obstacle& stone)
{
	printHeader(Drone);
	for (size_t i = 0; i < screenSizeY; i++)
	{
		printLine(i, Drone, stone);

	}
	for (size_t i = 0; i < screenSizeX; i++)
	{
		cout << "=";
	}


}

void screen::printHeader(plane& Drone)
{
	for (size_t i = 0; i < screenSizeX; i++)
	{
		cout << "=";
	}
	cout << "\nLIVE: ";
	for (size_t i = 0; i < Drone.lives(); i++)
	{
		cout << "*";
	}
	cout << endl;
	for (size_t i = 0; i < screenSizeX; i++)
	{
		cout << "=";
	}
	cout << endl;
	

}

void screen::printLine(size_t line, plane& Drone, obstacle& stone)
{
	size_t dec = 2;

	cout << "|";
	if (line == Drone.position() - 1) {

		cout << " " << Drone.UperWing;
		dec = 5;
	}
	else if (line == Drone.position())
	{
		cout << Drone.body;
		dec = 8;
	}
	else if (line == Drone.position() + 1)
	{
		cout << " " << Drone.lowerWing;
		dec = 5;
	}

	if (line == stone.positionY()) {

		for (size_t i = 0; i < stone.positionX() - 1 - dec; i++)
		{
			cout << " ";
			 
		}
		cout << stone.shape();
		for (size_t i = 0; i < screenSizeX - stone.positionX(); i++)
		{
			cout << " ";
		}
		cout << "|" << endl;
	}
	else
	{
		for (size_t i = 0; i < screenSizeX - dec; i++)
		{
			cout << " ";
		}
		cout << "|" << endl;
	}
	
	

}
