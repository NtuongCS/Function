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
	int i = 1;

	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == n)
		cout << "HT";
	else
		cout << "ko HT";
}