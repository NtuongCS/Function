#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

float tinh();

int main()
{
	cout << "ket qua la: " << setprecision(2)<<tinh;
}
float tinh()
{
	float s = 0;
	float e = 0.5;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / ((i + 1) * i);
		s = s + e;
		i = i + 1;
	}
	return s;
}