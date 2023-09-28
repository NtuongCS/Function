#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

float trans (float c)
{
	return  (c*9/5)+32;
}
int main()
{
	float  c;
	cout << "Nhap vao do c: ";
	cin >> c;
	float f = trans(c);
	cout << "do f la: " << f;
	return 0;
}
	