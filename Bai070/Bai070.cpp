#include <iostream>
using namespace std;

int tinhTong(int x,int n)
{
	int s = 0;
	int t = 1;
	for (int i = 1; i <= 2*n; i=i+2)
	{
		t = t * x*x;
		s = s + t;
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
	int sum = tinhTong(x,n);
	cout << "ket qua la: " << sum;
	return 0;

}