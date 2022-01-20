#pragma once
#include <fstream>

using namespace std;

class Fraction
{
public:
	Fraction() { _a = _b = 1; };
	Fraction(int a, int b) { _a = a; _b = b; }
	~Fraction();
	int getA() { return _a; }
	int getB() { return _b; }
	void setA(int a) { _a = a; }
	void setB(int b) { _b = b; }
	void toString();
	void reduction();
	void getProperFraction();
	Fraction operator+(Fraction obj);
	Fraction operator+(int num);
	friend Fraction operator+(int num, Fraction obj);
	friend ostream& operator<<(ostream& stream, Fraction& obj);
	friend istream& operator>>(istream& stream, Fraction& obj);
	Fraction operator-(Fraction obj);
	Fraction operator*(Fraction obj);
	Fraction operator/(Fraction obj);
private:
	int _a; // числитель
	int _b; // знаменатель
	// Находим НОК (наименш общ кратное), это общий знаменатель
	int _getLCM(int x, int y);
	// Находим НОД (наибольш общ делитель)
	int _getGCD(int x, int y);
};