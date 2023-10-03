#include <iostream>
using namespace std;

float tinhTong(int, int);

int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	int x;
	cout << "nhap so x: ";
	cin >> x;
	float sum = tinhTong(x, n);
	cout << "ket qua la: " << sum;
	return 0;
}
float tinhTong(int x, int n)
{
	float s = 0;
	int m = 0;
	int dau = 1;
	for (int i = 1; i <= n; i++)
	{
		m = m + i;
		s = s + (float)dau / m;
		dau = -dau;
	}
	return s;
}