#include <iostream>
#include <fstream>
#include "Fraction.h"

using namespace std;

int main() {
	Fraction a(5, 14);
	Fraction b(3, 35);
	Fraction c(1, 4);
	Fraction d(1, 4);
	Fraction e(1, 2);
	cout << e << endl;
	/*(a / b).getProperFraction();
	(a * b).toString();
	(e + 5).toString();
	(5 + e).toString();
	int num1;
	cin >> num1;
	int num2;
	cin >> num2;
	Fraction user(num1, num2);
	(user - c).toString();*/

	ifstream fin("input.txt");
	Fraction g;
	fin >> g;
	cout << g << endl;
}