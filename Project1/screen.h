#ifndef SCREEN_H
#define SCREEN_H
#include "plane.h"
#include "obstacle.h"
class screen
{
	

public:

	void printGame(plane& Drone,obstacle& stone);
	void printHeader(plane& Drone);
	void printLine(size_t line, plane& Drone,obstacle& stone );



};
#endif 

