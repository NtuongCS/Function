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
	float s = 1;
	float t = 1;
	float e = 1;
	int i = 1;
	int m = 1;
	while (e >= pow(10, -6))
	{

		t = t * x;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}
