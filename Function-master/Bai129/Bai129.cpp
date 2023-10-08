#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
void Tinh(int, int,int);

int main()
{
	int a, b,c;
	Nhap(a);
	Nhap(b);
	Nhap(c);
	Tinh(a, b,c);
	return 0;
}
void Nhap(int& a)
{
	cout << "Nhap : ";
	cin >> a;
}
void Tinh(int a, int b,int c)
{
	int temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	cout << a << " " << b << " " << c;
}