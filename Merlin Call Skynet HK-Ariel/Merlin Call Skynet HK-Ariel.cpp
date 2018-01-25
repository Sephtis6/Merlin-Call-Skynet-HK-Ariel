// Skynet HK-Ariel.cpp : Defines the entry point for the console application.

//Guess My number
//THe classic number guessing game

//line told to add/starting included line
#include "stdafx.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//seed random number generator
	srand(static_cast<unsigned int>(time(0)));

	//random number between 1 and 100
	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;

	cout << "\tWelcome to my Guess My Number\n\n";

	do
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
		}
		
		else if (guess < secretNumber)
		{
			cout << "Too low!\n\n";
		}

		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);

	//this will pause the system so you can see the printed info
	system("pause");

	return 0;
}

