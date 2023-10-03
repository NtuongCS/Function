#include <iostream>
#include <cmath>
using namespace std;

float tinhTong(int);

int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	cout << "ket qua la: " << tinhTong(n);
}
float tinhTong(int n)
{
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = pow(sqrt(i + s),(float)1/i);
	}
	return s;
}