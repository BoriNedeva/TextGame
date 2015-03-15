#ifndef BROTHER_INCLUDE_GUARD
#define BROTHER_INCLUDE_GUARD

#include <string>
#include "hero.h"

class Brother : public Hero
{
public:
	Brother(std::string name) : Hero(name)
	{
	}
	void Play();

	~Brother()
	{

	}

};


#endif