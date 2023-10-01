#include <iostream>
using namespace std;

float tinhTong(int x, int n)
{
	float s = 1 + x;
	int t = 1;
	int m = 1;
	for (int i = 3; i <= 2*n+1; i = i + 2)
	{
		t = t * x*x;
		m = m * i*(i-1);
		s = s + (float)t / m;
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