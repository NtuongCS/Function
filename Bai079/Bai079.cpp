#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int&);
float Tinhsohang(int);

int main()
{
	int n;
	Nhap(n);
	cout << Tinhsohang(n);
	return 0;
}
void Nhap(int& n)
{
	cin >>  n;
}
float Tinhsohang(int n)
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