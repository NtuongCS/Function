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
	float s = 0;
	float e = 1;
	int i = 1;

	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}