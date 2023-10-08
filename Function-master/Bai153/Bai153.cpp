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
	int flag = 1;
	int t = n;

	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = 0;
		t = t / 5;
	}
	if (flag == 1)
		cout << "Dang";
	else
		cout << "ko dang";
}