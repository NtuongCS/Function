#include <iostream>
using namespace std;

float tinhTong(int x, int n)
{
	float s = 0;
	float t = 1;
	int dau = -1;
	for (int i = 2; i <=2*n; i=i+2)
	{
		t = t * x * x;
		s = s + t * dau;
		dau = -dau;
	}
	return s;
}
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