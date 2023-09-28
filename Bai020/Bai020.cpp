#include <iostream>
#include <cmath>;
using namespace std;

float luyThua14(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x6 = x4 * x2;
	float x14 = x8*x6;
	return x14;
}
int main()
{
	float x;
	cout << "nhap so x: ";
	cin >> x;
	float xMu14 = luyThua14(x);
	cout <<"x mu 14=" xMu14;
	return 0;
}