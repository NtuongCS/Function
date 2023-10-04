#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
float Tinhsohang(int);

int main()
{
	int n;
	Nhap(n);
	cout << "s= " << Tinhsohang(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
float Tinhsohang(int n)
{
	float s = 0;
	int i = 1;

	while (i <= n)
	{
		s = pow(i + s, (float)1 / (i + 1));
		i = i + 1;
	}
	return s;
}