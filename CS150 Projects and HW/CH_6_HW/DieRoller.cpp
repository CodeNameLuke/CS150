#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "cstdlib"
using namespace std;

unsigned int rollDice();



int main()
{

	unsigned int myPoint = 0;



	enum class Status { CONTINUE, WON, LOST };

	srand(static_cast<unsigned int>(time(0)));

	Status gameStatus = Status::CONTINUE;

	unsigned int sum = rollDice();

	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = Status::WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = Status::LOST;
		break;
	default:
		gameStatus = Status::CONTINUE;
		myPoint = sum;
		cout << "Get " << sum << " to score!" << endl;
		break;
	}

	while (Status::CONTINUE == gameStatus) {

		sum = rollDice();

		if (sum == myPoint) {

			gameStatus = Status::WON;

		}
		else {
			if (sum == 7) {

				gameStatus = Status::LOST;

			}
		}
	}

	if (Status::WON == gameStatus) {

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
