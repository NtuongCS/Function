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
	int flag = 0;
	int i = 0;

	while (i <= n)
	{
		if (i * i == n)
			flag = 1;
		i = i + 1;
	}
	if (flag == 1)
		cout << "CP";
	else
		cout << "ko CP";
}