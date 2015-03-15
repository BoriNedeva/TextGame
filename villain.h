#ifndef VILLAIN_INCLUDE_GUARD
#define VILLAIN_INCLUDE_GUARD

#include <string>

class Villain
{
private:
	int xPoints;
public:
	Villain()
	{
		this->xPoints = 70;
	}

	int GetXP() const
	{
		return this->xPoints;
	}
};

#endif