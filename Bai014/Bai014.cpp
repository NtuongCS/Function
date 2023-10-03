#include <iostream>
#include <cmath>;
using namespace std;

float luyThua32(float );

int main()
{
	float x;
	cout << "nhap so x: ";
	cin >> x;
	float xx32 = luyThua32(x);
	cout << xx32;
	return 0;
}

float luyThua32(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x32 = x16 * x16;
	return x32;
}
