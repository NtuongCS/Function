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
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		s = pow(sqrt(t + s), (float)1 / (i + 1));
	}
	return s;
}
