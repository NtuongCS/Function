#include <iostream>
using namespace std;

float tinhTong(int x, int n)
{
	int s = 1;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		s = s + t*(i+1);
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