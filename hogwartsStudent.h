#ifndef HOGWARTSSTUDENT_INCLUDE_GUARD
#define HOGWARTSSTUDENT_INCLUDE_GUARD

#include <string>
#include "hero.h"

class HogwartsStudent : public Hero
{
public:
	HogwartsStudent(std::string name) : Hero(name)
	{
	}
	void Play();

	~HogwartsStudent()
	{

	}
	
};


#endif