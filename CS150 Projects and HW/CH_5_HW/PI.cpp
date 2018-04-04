#include "stdafx.h"
#include "iostream"

using namespace std;


int main() {

	int n = 0;

	cout << "Enter Count: " << endl;
	cin >> n;

	double pi = 4;



	for (int count = 1; count <= n; count++)
	{

		if (count == 1)
		{
			cout << count << ":" << pi << endl;
		}
		else if (count % 2 == 1)
		{
			pi = pi + (4.0 / ((2 * count) - 1));
									
			cout << count << ":" << pi << endl;
		}
		else
		{
			pi = pi - (4.0 / ((2 * count) - 1));
											
			cout << count << ":" << pi << endl;
		}

	}


}
