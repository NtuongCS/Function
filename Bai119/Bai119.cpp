#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
float Tinhsohang(int);

int main()
{
	int n;
	Nhap(n);
	cout << "ahh= " << Tinhsohang(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
float Tinhsohang(int n)
{
	float at = 2;
	int i = 2;
	float ahh;

	while (i <= n)
	{
		ahh = (float)(at * at + 2) / (2 * at);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}