// hw4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;


int main()
{
	double s1 = 0, s2 = 0, s3 = 0;
	double sentinel = -1;

	while (s1 != sentinel) {

		cout << "Enter 3 Side Lengths To Determine Whether A Triangle Can Be Formed (Enter -1 to exit):\n>";
		cin >> s1;

		if (s1 != sentinel) {

			cin >> s2 >> s3;

			if (((s1 + s2) > s3) && ((s2 + s3) > s1) && ((s1 + s3) > s2)) {

				cout << "A triangle can be formed." << endl;

			}
			else {

				cout << "A triangle cannot be formed." << endl;


			}
		}
	}


    return 0;
}

