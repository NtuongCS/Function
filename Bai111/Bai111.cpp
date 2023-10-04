#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tinhtong();

int main()
{
	cout << "s= " << Tinhtong();
	return 0;
}

float Tinhtong()
{
	float s = 3;
	int dau = 1;
	float e = 3;
	int i = 2;

	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}