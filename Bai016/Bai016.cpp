#include <iostream>
#include <cmath>;
using namespace std;

float luyThua9(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x9 = x8*x;
	return x9;
}
int main()
{
	float x;
	cout << "nhap so x: ";
	cin >> x;
	float xMu9 = luyThua9(x);
	cout <<"x mu 9="<<xMu9;
	return 0;
}
