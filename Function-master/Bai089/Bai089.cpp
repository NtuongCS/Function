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
	float s = 0;
	float t = 1;
	float m = 0;
	int i = 1;
	int dau = -1;

	while (i <= n)
	{
		m = m + i;
		t = t * x;
		s = s + (float)(dau * t) / m;
		i = i + 1;
		dau = -1 * dau;
	}
	return s;
}