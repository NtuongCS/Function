#include <iostream>
#include <cmath>;
using namespace std;

float luyThua6(float);

int main()
{
	float x;
	cout << "nhap so x: ";
	cin >> x;
	float x66 = luyThua6(x);
	cout << x66;
	return 0;
}
float luyThua6(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	return x6;
}
