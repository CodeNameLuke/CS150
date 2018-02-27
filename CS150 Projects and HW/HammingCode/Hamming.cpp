#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
int hamming(char ascii, int encoded);
int ascii_to_binary(char ascii);
bool evenCheck(int check1, int check2);




int main()
{

	return 0;

}



int hamming(char ascii, int encoded)
{
	int p1, p2, p3, p4;

	ascii_to_binary(ascii);

	
	return 0;
}

bool evenCheck(int check1, int check2) {

	int checker = check1 + check2;

	if (checker % 2 == 0) {

		return true;

	}
	else {

		return false;

	}
	
	
}


int ascii_to_binary(char ascii) {

	char character = ascii;
	int i;
	int m[8];


	for (i = 0; i<8; i++)
	{
		m[i] = character % 2;
		character = character / 2;
	}

	int top, bottom;

	for (bottom = 0, top = 6; bottom<7; bottom++, top--)
	{

		cout << m[top];
	}

	return 0;

}
