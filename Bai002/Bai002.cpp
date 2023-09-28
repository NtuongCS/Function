#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

float s(int r)
{
	return  r * r * M_PI;
}
int main()
{
	int r;
	cout << "Nhap vao r: ";
	cin >> r;
	float  dt = s(r);
	cout << "dien tich la: " << dt;
	return 0;
}