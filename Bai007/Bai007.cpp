#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float dientich(float);

int main()
{
	float f;
	cout << "Nhap f: ";
	cin >> f;
	cout << "c= " << setprecision(4) << dientich(f);
}
float dientich(float ff)
{
	float c = (float) (5 * (ff - 32)) / 9;
	return c;
}