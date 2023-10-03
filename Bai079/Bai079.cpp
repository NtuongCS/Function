#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int&);
float Tinhtong(int);

int main()
{
	int n;
	Nhap(n);
	cout << Tinhtong(n);
	return 0;
}
void Nhap(int& n)
{
	cin >>  n;
}
float Tinhtong(int n)
{
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + i*t;
		i = i + 1;
	}
	return s;
}