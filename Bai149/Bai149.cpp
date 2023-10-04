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
void Tinh(int a,int b)
{
	int m = abs(a);
	int n = abs(b);

	int ucln;
	while (m * n != 0)
		if (m > n)
			m = m - n;
		else
			n = n - m;
	ucln = m + n;
	cout << ucln;
}