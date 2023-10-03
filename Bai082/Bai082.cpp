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
	float t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * sin(x);
		s = s + t;
	}
	return s;
}