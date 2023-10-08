#include <iostream>
using namespace std;

float tinhTong(int);

int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	float sum = tinhTong(n);
	cout << "ket qua la: " << sum;
	return 0;
}
float tinhTong(int n)
{
	float s = 0;
	int m = 0;
	for (int i = 1; i <= n; i++)
	{
		m = m + i;
		s = s + (float)1 / m;
	}
	return s;
}