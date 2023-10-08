#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
void Tinh(int);

int main()
{
	int n;
	Nhap(n);
	Tinh(n);
	return 0;
}
void Nhap(int& a)
{
	cout << "Nhap : ";
	cin >> a;
}
void Tinh(int n)
{
	float s = 0;
	int k = 0;

	while (s + k + 1 < n)
	{
		k = k + 1;
		s = s + k;
	}
	cout << k;
}