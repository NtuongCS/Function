#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
void Tinh(int);

int main()
{
	int n;
	Nhap(n);
	Tinh(n);
	return 0;
}
void Nhap(int& a)
{
	cout << "Nhap : ";
	cin >> a;
}
void Tinh(int n)
{
	int lc = n % 10;
	int dem = 0;
	int t = n;

	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == lc)
			dem = dem + 1;
		t = t / 10;
	}
	cout << dem;
}