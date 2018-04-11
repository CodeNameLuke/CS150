#include "stdafx.h"
#include "iostream"

using namespace std;


int main()
{
double s1 = 0, s2 = 0, s3 = 0;
double sentinel = -1;

while (s1 != sentinel) {

cout << "Enter 3 Non-Zero Side Lengths To Determine Whether A Triangle Can Be Formed (Enter -1 to exit):\n>";
cin >> s1;

while (s1 == 0) {

cout << "Sidelength Cannot Be 0. Try Again.\n>";
cin >> s1;

}

if (s1 != sentinel) {

cout << ">";
cin >> s2;

while (s2 == 0) {

cout << "Sidelength Cannot Be 0. Try Again.\n>";
cin >> s2;

}
cout << ">";
cin >> s3;

while (s3 == 0) {

cout << "Sidelength Cannot Be 0. Try Again.\n>";
cin >> s3;

}

if (((s1 + s2) > s3) && ((s2 + s3) > s1) && ((s1 + s3) > s2)) {

int s1_squared = s1 * s1;
int s2_squared = s2 * s2;
int s3_squared = s3 * s3;

if (s1_squared + s2_squared == s3_squared) {

cout << "This Is A Right Triangle." << endl;

}
else if (s2_squared + s3_squared == s1_squared) {

cout << "This Is A Right Triangle." << endl;

}
else if (s3_squared + s1_squared == s2_squared) {

cout << "This Is A Right Triangle." << endl;

}
else {

cout << "This Is Not A Right Triangle." << endl;

}

}
else {

cout << "A triangle cannot be formed." << endl;

}
}
}

return 0;
}
