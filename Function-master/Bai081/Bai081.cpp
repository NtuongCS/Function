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
	float s = 0;
	float m = 1;
	int i = 0;
	while (i <= n)
	{
		m = m * (x + i);
		s = s + (float)1/ m;
		i = i + 1;
	}
	return s;
}