#include "stdafx.h"
#include "iostream"
#include "iomanip"

using namespace std;

void towerOfHanoi(int numberToBeMoved, char initialPeg, char finalPeg, char tempPeg);


int main() {



}

void towerOfHanoi(int n, char peg1, char peg2, char peg3)
{

	while (n != 0)

		towerOfHanoi(n - 1, peg1, peg3, peg2);

		towerOfHanoi(n - 1, );

	}

}
