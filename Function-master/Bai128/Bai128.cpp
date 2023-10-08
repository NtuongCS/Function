#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&);
void Tinh(float, float);

int main()
{
	float a, b;
	Nhap(a);
	Nhap(b);
	Tinh(a,b);
	return 0;
}
void Nhap(float& a)
{
	cout << "Nhap : ";
	cin >> a;
}
void Tinh(float a, float b)
{
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	cout << a<<" " << b;
}