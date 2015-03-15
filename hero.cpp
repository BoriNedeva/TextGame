#include <iostream>
#include <fstream>
#include <cstring>
#include "hogwartsStudent.h"
#include "brother.h"
#include "hero.h"
#include "villain.h"
#include "game.h"

using namespace std; 

int MaxXP = 30;
int MediumXP = 20;
int MinXP = 10;

void Hero::AddXP(int points)
{
	this->xPoints = xPoints + points;
}

int Hero::GetXPoints() const
{
	return this->xPoints;
}
void Hero::SetChoice(int choice)
{
	this->choice = choice;
}

int Hero::GetChoice() const
{
	return this->choice;
}

string Hero::GetName() const
{
	return this->name;
}

void Hero::Step(int choice, string textFile1, string textFile2, string textFile3, int stepNumber)
{
	switch (choice)
	{
	case 1: {
				ReadFromFile(textFile1);
				this->AddXP(MaxXP);
	} break;
	case 2:{
			   ReadFromFile(textFile2);
			   this->AddXP(MediumXP);
	} break;
	case 3:{
			   ReadFromFile(textFile3);
			   this->AddXP(MinXP);
	} break;
	default: 
		break;
	}

	if (stepNumber < 3)
	{
		this->MakeChoice();
	}
}

void Hero::Battle(string winMessage, string loseMessage) const
{
	Villain* villain = new Villain();
	cout << endl << "Dear brave soldier " + this->GetName() + "," << endl;
	if (this->GetXPoints() >= villain->GetXP())
	{
		ReadFromFile(winMessage);
	}
	else
	{
		ReadFromFile(loseMessage);
	}
}

void Hero::MakeChoice()
{

	bool wrongInput = true;
	while (wrongInput)
	{
		string newChoice;
		cin >> newChoice;
		int newChoiceInteger = atoi(newChoice.c_str());
		if (newChoiceInteger == 1 || newChoiceInteger == 2 || newChoiceInteger == 3)
		{
			this->SetChoice(newChoiceInteger);
			wrongInput = false;
			break;
		}
		else
		{
			cout << "Can't you read? Try again!" << endl;
		}

	}
}