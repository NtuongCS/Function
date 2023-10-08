#include <iostream>
#include <cmath>;
using namespace std;

float luyThua12(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x12 = x8 * x4;
	return x12;
}
int main()
{
	float x;
	cout << "nhap so x: ";
	cin >> x;
	float xMu12 = luyThua12(x);
	cout << "x mu 12=" << xMu12;
	return 0;
}