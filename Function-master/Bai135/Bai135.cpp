#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
void Tinh(int, int);

int main()
{
	int x, y;
	Nhap(x);
	Nhap(y);
	Tinh(x, y);
	return 0;
}
void Nhap(int& a)
{
	cout << "Nhap : ";
	cin >> a;
}
void Tinh(int x, int y)
{
	int n = x;
	while (n <= y)
	{
		int dk1 = ((n % 4 == 0) && (n % 100 != 0));
		int dk2 = (n % 400 == 0);
		if (dk1 or dk2)
			cout << n << " ";
		n = n + 1;
	}
}