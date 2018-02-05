#include <iostream>


class Calculator
{
public:
	explicit Calculator();
	int add(int a, int b);
	int subtract(int a, int b);
	int multiply(int a, int b);
	double divide(double a, double b);
	void clear();

private:

	int sum;
	double dsum;
	


};
