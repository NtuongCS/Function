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
	cout << "x11= " << luythua(x);
	return 0;
}

float luythua(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x10 = x8 * x2;
	float x11 = x10 * xx;
	return x11;
}