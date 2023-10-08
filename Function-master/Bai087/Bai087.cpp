#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float&, float&);
float Tinhtong(float, float);

int main()
{
	float x, n;
	Nhap(x, n);
	cout << "s= " << Tinhtong(x, n);
	return 0;
}
void Nhap(float& x, float& n)
{
	cout << "Nhap n: ";
	cin >> n;

	cout << "Nhap x: ";
	cin >> x;
}
float Tinhtong(float x, float n)
{
	float s = x;
	float t = x;
	int i = 3;
	int dau = -1;

	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		s = s + dau * t;
		i = i + 2;
		dau = -1 * dau;
	}
	return s;
}