#include <iostream>
using namespace std;

int timSoHang(int);

int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	cout << "so hang thu " << n << "la: " << timSoHang(n);
}
int timSoHang(int n)
{
	int att = 1;
	int at = 2;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}