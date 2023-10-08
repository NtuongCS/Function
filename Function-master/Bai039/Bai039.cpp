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
	for (int i=1;i<=nn;i++)
	{
		t = t * (1 + (float)1 / (i * i));
	}
	return t;
}