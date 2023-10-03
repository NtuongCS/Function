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
	float s = 1-x;
	int m = 1;
	int t = x;
	int dau = 1;
	for (int i = 3; i <= 2*n+1; i=i+2)
	{
		t = t * x;
		m = m * i;
		s = s + (float)dau * t / m;
		dau = -dau;
	}
	return s;
}