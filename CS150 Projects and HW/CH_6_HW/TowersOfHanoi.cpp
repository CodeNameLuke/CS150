#include "stdafx.h"
#include "iostream"
#include "iomanip"

using namespace std;

void towerOfHanoi(int, char, char, char);


int main() {

	towerOfHanoi(3, 'A', 'B', 'C');


}

void towerOfHanoi(int n, char source, char finalPeg, char tempPeg)
{

	if (n == 1) {

		cout << "Move " << source << " To " << finalPeg << endl;


	}
	else {

		towerOfHanoi(n - 1, source, tempPeg, finalPeg);
		cout << "Move " << source << " To " << finalPeg << endl;

		towerOfHanoi(n - 1, tempPeg, finalPeg, source);


	}

}

