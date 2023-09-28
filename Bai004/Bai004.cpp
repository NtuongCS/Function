#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

float sxq(int r)
{
	return 4 * r * r * M_PI;
}
int main()
{
	int r;
	cout << "Nhap vao r: ";
	cin >> r;
	float  s = sxq(r);
		cout << "dien tich xung quanh la: " << s;
	return 0;
}

