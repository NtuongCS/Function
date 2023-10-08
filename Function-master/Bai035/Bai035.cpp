#include <iostream>
#include <iomanip>
using namespace std;

float Tinhtich(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "t= " << setprecision(4) << Tinhtich(n);
	return 0;
}
float Tinhtich(int nn)
{
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		i = i + 1;
	}
	return t;
}