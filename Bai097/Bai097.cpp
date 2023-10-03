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
	int i = 1;

	while (i <= n)
	{
		t = t * x;
		s = sqrt(t + s);
		i = i + 1;
	}
	return s;
}