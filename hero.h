#ifndef HERO_INCLUDE_GUARD
#define HERO_INCLUDE_GUARD

#include <string>

class Hero
{
protected:
	std::string name;
	int xPoints;
	int choice;
public:
	Hero(std::string name)
	{
		this->name = name;
		this->xPoints = 0;
		this->choice = 0;
	}
	
	void Step(int choice, std::string textFile1, std::string textFile2, std::string textFile3, int stepNumber);
	void Battle(std::string winMessage, std::string loseMessage) const;
	virtual void Play() = 0;
	void MakeChoice();

	void AddXP(int points);
	int GetXPoints() const;
	void SetChoice(int choice);
	int GetChoice() const;
	std::string GetName() const;

	~Hero()
	{

	}
};



#endif