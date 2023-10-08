#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float dientich(float,float);

int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "s= " << setprecision(4) << dientich(r,n);
}
float dientich(float rr,float nn)
{
	float s = (nn * rr * rr * sin((float)(2 * M_PI) / nn)) / 2;
	return s;
}