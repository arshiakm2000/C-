#ifndef PLANE_H
#define PLANE_H

class plane
{
	size_t Position;
	size_t Lives;

public:
	char UperWing[3];
	char lowerWing[3];
	char body[7];
	plane();
	virtual ~plane() = default;
	size_t lives();
	size_t position();
	bool changePosition(bool direction);





private:


};
#endif
