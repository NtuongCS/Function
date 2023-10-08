#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float tinh(float);

int main()
{
	float x;
	cout << "nhap x: ";
	cin >> x;
	cout << "ket qua la: " << tinh(x);
}
float tinh(float x)
{
	float xx = (float)(x * M_PI) / 180;
	float s =xx;
	int t = xx;
	float e = xx;
	int i = 3;
	int m = 1;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		
		t = t * xx * xx;
		m = m * (i + 1) * i;
		e = (float)t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}