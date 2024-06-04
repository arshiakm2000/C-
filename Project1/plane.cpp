#define _CRT_SECURE_NO_WARNINGS
#include "plane.h"
#include "cstring"
plane::plane()
{
	strcpy(UperWing, "|\\");
	strcpy(body, ">==>=>");
	strcpy(lowerWing, "|/");
	Position = 11;
	Lives = 3;

}

size_t plane::lives()
{
	return Lives;
}

size_t plane::position()
{
	return Position;
}


bool plane::changePosition(bool direction)
{
	bool result = false;
	if (direction == true) {
		if (Position > 1) {
			Position -= 1;
			result = true;
		}
	}
	else if (direction == false)
	{
		if (Position < 19) {
			Position += 1;
			result = true;
		}
	}
	return result;
}
