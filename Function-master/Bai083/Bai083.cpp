#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&);
float Tinhtong(float, float);

int main()
{
	float x, n;
	Nhap(x, n);
	cout << Tinhtong(x, n);
	return 0;
}
void Nhap(float& x, float& n)
{
	cin >> x >> n;
}
float Tinhtong(float x, float n)
{
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + sin(t);
		i = i + 1;
	}
	return s;
}