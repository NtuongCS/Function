#include <iostream>
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
	float s = 1;
	float t = 1;
	float m = 1;
	int i = 2;
	while (i <= 2*n)
	{
		t = t * x*x;
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i = i + 2;
	}
	return s;
}