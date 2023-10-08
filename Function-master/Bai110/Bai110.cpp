#include <iostream>
#include <cmath>
using namespace std;

float tinh(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	cout << "ket qua la: " << tinh(n);
}
float tinh(int n)
{
	float s = 0;
	float e = 4;
	int dau = 11;
	s = s + dau * e;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}