#include "stdafx.h"
#include "iostream"
#include "iomanip"

using namespace std;

int main()
{	
	double totalPrice = 0.0;
	int productInput = 0, quantity = 0;

	cout << "List of Products" <<  endl;
	cout << "------------------" << endl;
	cout << "Product # | Price " << endl;
	cout << "------------------" << endl;
	cout << "   1        $2.98 " << endl;
	cout << "   2        $4.50 " << endl;
	cout << "   3        $9.98 " << endl;
	cout << "   4        $4.49 " << endl;
	cout << "   5        $6.87 " << endl;
	cout << "------------------" << endl;

	while (productInput != -1) {

		cout << "Enter Product number and quantity. (Enter -1 to calculate total price)" << endl;
		
		cout << "Product # : ";
		cin >> productInput;

		if (productInput != -1) {

			cout << "Quantity : ";
			cin >> quantity;

			switch (productInput)
			{
				case 1:
					totalPrice += (2.98 * quantity);
					break;
				case 2:
					totalPrice += (4.50 * quantity);
					break;
				case 3: 
					totalPrice += (9.98 * quantity);
					break;
				case 4: 
					totalPrice += (9.98 * quantity);
					break;
				case 5: 
					totalPrice += (6.87 * quantity);
					break;
				default: 
					cout << "Invalid Entry. Product Numbers Range is 1-5" << endl;				
			}
		}
	}

	cout << "===============" << endl;
	cout << "Total : $" << totalPrice << endl;
	cout << "===============" << endl;

    return 0;
}

