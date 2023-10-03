#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
void Tinh(int,int);

int main()
{
	int a,b;
	Nhap(a);
	Nhap(b);
	Tinh(a,b);
	return 0;
}
void Nhap(int& a)
{
	cout << "Nhap : ";
	cin >> a;
}
void Tinh(int a, int b)
{
	float x;
	if (a == 0)
		if (b == 0)
			cout << "VSN";
		else
			cout << "VN";
	else
		x = (float)(-b) / a;
	cout << "x= " << setprecision(3) << x;
}