#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
void Tinh(int, int);

int main()
{
	int a, b;
	Nhap(a);
	Nhap(b);
	Tinh(a, b);
	return 0;
}
void Nhap(int& a)
{
	cout << "Nhap : ";
	cin >> a;
}
void Tinh(int a, int b)
{
	int lc = a;
	if (lc > b)
		lc = b;
	cout << "lc= " << lc;
}