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
	int t = 1;
	int i = 0;
	while (i <= n)
	{
		t = t * 2;
		cout << t << " ";
		i = i + 1;
	}
}