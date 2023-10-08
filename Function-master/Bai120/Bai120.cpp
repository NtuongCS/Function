#include <iostream>
#include <cmath>
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
		ahh = 5 * at + sqrt(24 * at * at-8);
		i++;
		at = ahh;
	}
	return ahh;
}