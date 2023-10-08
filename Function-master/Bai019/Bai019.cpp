#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float luythua(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x13= " << luythua(x);
	return 0;
}

float luythua(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x5 = x4 * xx;
	float x8 = x4 * x4;
	float x13 = x8 * x5;
	return x13;
}