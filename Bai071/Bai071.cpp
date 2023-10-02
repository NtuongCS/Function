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
	float s = x;
	float t = x;
	int i = 3;
	while (i <= 2*n+1)
	{
		t = t * x*x;
		s = s + t;
		i=i+2;
	}
	return s;
}