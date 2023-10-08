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
	cout << "x15= " << luythua(x);
	return 0;
}

float luythua(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x15 = x16 / xx;
	return x15;
}