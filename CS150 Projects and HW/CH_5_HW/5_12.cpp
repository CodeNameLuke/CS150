#include "stdafx.h"
#include "iostream"

using namespace std;


int main() {

	int product = 1;

	for (int i = 1; i <= 15; i += 2) {

		cout << product << " * " << i << endl;

		product = product * i;

		cout << "= " << product << "\n\n";


	}

	cout << "Total = " << product << "\n\n";



}
