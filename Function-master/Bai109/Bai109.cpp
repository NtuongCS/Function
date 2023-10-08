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
	float s = 1;
	float m = 1;
	float e = 1;
	int i = 1;

	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}