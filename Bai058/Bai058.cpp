#include <iostream>
using namespace std;

int tongChuSo(int n)
{
	int t = n;
	int tong = 0;
	while (t!=0)
	{	
		int dv = t % 10;
		tong = tong + dv;
		t = t / 10;
	}
		return tong;
}
int main()
{
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int sum = tongChuSo(n);
	cout << "ket qua la: " << sum;
	return 0;
}