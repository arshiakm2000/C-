#include <iostream>
#include <cstring>
#include <conio.h>
#include "screen.h"
#include "plane.h"
using namespace std;
int main() {
	plane drone;
	obstacle stone;
	screen sc;
	char entery = ' ';
	while (1)
	{
		system("CLS");
		sc.printGame(drone, stone);
		entery = _getch();
		stone.changePosition();
		if (entery == 'w') {
			drone.changePosition(1);
		}
		else if (entery == 's')
		{
			drone.changePosition(0);

		}

	}

	return 0;
}