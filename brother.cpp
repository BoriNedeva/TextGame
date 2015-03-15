#include <iostream>
#include "brother.h"
#include "hero.h"
#include "villain.h"
#include "game.h"

using namespace std;

void Brother::Play()
{
	ReadFromFile("brother.txt");
	this->MakeChoice();
	this->Step(this->GetChoice(), "oath.txt", "girlfriend.txt", "no_oath.txt", 1);
	this->Step(this->GetChoice(), "dragon_glass.txt", "fire.txt", "wht.txt", 2);
	this->Step(this->GetChoice(), "cant_wait.txt", "rear.txt", "cold.txt", 3);
}
