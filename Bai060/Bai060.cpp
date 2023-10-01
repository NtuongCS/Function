#include <iostream>
using namespace std;

int tichChuSo(int n)
{
	int t = n;
	int tich = 1;
	while (t != 0)
	{
		int dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	return tich;
}
int main()
{
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int t = tichChuSo(n);
	cout << "ket qua la: " << t;
	return 0;
}