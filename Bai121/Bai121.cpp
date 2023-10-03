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
	float att = 1;
	float at = 1;
	int i = 2;
	float ahh;

	while (i <= n)
	{
		ahh = at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}