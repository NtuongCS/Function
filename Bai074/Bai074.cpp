#include <iostream>
using namespace std;

float tinhTong(int x, int n)
{
	float s = 0;
	int t = 1;
	int m = 1;
	for (int i = 1; i <= n; i = i + 1)
	{
		t = t * x;
		m = m * i;
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