#include <iostream>
using namespace std;

float timSoHang(int);

int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	cout << "so hang thu " << n << "la: " << timSoHang(n);
}float timSoHang(int n)
{
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= n)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		i++;
		at = ahh;
	}
	return ahh;
}