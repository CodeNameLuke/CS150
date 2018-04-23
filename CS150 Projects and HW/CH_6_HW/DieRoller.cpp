// DieRoller.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
using namespace std;

unsigned int rollDice();



int main()
{
	
	unsigned int myPoint = 0;



	enum Status { CONTINUE, WON, LOST };

	srand(static_cast<unsigned int>(time(0)));
	
	Status gameStatus = CONTINUE;
	
	unsigned int sum = rollDice();

	switch (sum)
	{
		case 7: 
		case 11:
			gameStatus = WON;
			break;
		case 2: 
		case 3:
		case 12:
			gameStatus = LOST;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			cout << "Get " << sum << " to score!" << endl;
			break;
	}

	while (CONTINUE == gameStatus) {
		
		sum = rollDice();

		if (sum == myPoint) {

			gameStatus = WON;

		}
		else {
			if (sum == 7) {
				
				gameStatus = LOST;

			}
		}
	}

	if (WON == gameStatus) {

		cout << "Player Wins." << endl;

	}
	else {

		cout << "Player Loses." << endl;

	}

    return 0;
}

unsigned int rollDice() {
	


	unsigned int die1 = 1 + rand() % 6;
	unsigned int die2 = 1 + rand() % 6;

	unsigned int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;

	return sum;

}
