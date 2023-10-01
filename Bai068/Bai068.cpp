#include <iostream>
using namespace std;

int tinhTong(int n)
{
	int s = 0;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		s = s + t;
	}
	return s;
}

int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	int sum = tinhTong(n);
	cout << "ket qua la: " << sum;
	return 0;

}
