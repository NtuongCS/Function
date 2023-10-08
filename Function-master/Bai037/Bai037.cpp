#include <iostream>
#include <iomanip>
using namespace std;

float Tinhtich(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "s= " << setprecision(4) << Tinhtich(n);
	return 0;
}
float Tinhtich(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + i*i*i;
		i = i + 1;
	}
	return s;
}