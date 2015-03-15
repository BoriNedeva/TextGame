#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "hogwartsStudent.h"
#include "hero.h"
#include "game.h"
#include "brother.h"
#include "villain.h"

using namespace std;

void Run()
{
	
	ReadFromFile("welcome.txt");
	string name;
	cin >> name;
	Hero* student = new HogwartsStudent(name);
	Hero* brother = new Brother(name);
	ReadFromFile("occupation.txt");
	string occupation;
	cin >> occupation;
	int occupationInteger = atoi(occupation.c_str());
	bool wrongInput = true;
	while (wrongInput)
	{
		switch (occupationInteger)
		{
		case 1:{
				   wrongInput = false;
				   student->Play();
				   system("pause");
				   student->Battle("pass.txt", "fail.txt");
		} break;
		case 2:{
				   wrongInput = false;
				   brother->Play();
				   system("pause");
				   brother->Battle("survive.txt", "die.txt");
		}break;
		case 3:{
				   wrongInput = false;
				   cout << "Coming soon in the next version aka I did't have time to write the story. Fingers crossed for the upcoming exams." << endl;
		} break;
		default: {
					 cout << "Can't you read? Try again!" << endl;
					 cin >> occupation;
					 occupationInteger = atoi(occupation.c_str());
		}break;
		}
	}

	delete student;
	delete brother;
}

void ReadFromFile(string file)
{
	string line;
	ifstream myFile(file);
	if (myFile.is_open())
	{
		while (getline(myFile, line))
		{
			cout << line << '\n';
		}
		myFile.close();
	}

	else cout << "Unable to open file!";

}

void StartGame()
{
	string input;
	cout << "Press 1 to start new game." << endl;
	cout << "Press 0 to exit." << endl;
	cin >> input;
	int inputInteger = atoi(input.c_str());
	switch (inputInteger)
	{
	case 1:{
			   Run(); 
	}break;
	case 0:{
			   exit(0);   
	}break;
	default:{
				cout << "Wrong input!" << endl;
				StartGame();
	}
		break;
	}

}
