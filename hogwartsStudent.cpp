#include <iostream>
#include "hogwartsStudent.h"
#include "hero.h"
#include "villain.h"
#include "game.h"

using namespace std;

void HogwartsStudent::Play()
{
	ReadFromFile("hogwarts_student.txt");
	this->MakeChoice();
	this->Step(this->GetChoice(), "defence.txt", "potions.txt", "quidditch.txt", 1);
	this->Step(this->GetChoice(), "serious.txt", "breaktaking.txt", "what_classes.txt", 2);
	this->Step(this->GetChoice(), "wizards.txt", "mom_or_dad.txt", "none.txt", 3);
}
