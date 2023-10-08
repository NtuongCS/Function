#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float&);
float Tinhtong(float);

int main()
{
	float x;
	Nhap(x);
	cout << "s= " << Tinhtong(x);
	return 0;
}

void Nhap(float& x)
{
	cout << "Nhap x: ";
	cin >> x;
}

float Tinhtong(float x)
{
	float xx = (x * M_PI) / 180;
	float s = 1;
	float t = 1;
	float m = 1;
	int dau = -1;
	float e = 1;
	int i = 2;

	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = (float)t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}