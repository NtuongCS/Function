#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float dientich(float);

int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;
	cout << "v= " << setprecision(4) << dientich(r);
}
float dientich(float rr)
{
	float v = (4*M_PI*rr*rr*rr)/3;
	return v;
}