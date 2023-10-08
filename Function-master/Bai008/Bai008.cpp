#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

float chuVi(float, float );

int main()
{
	float n, r;
	cout << "nhap so canh n: ";
	cin >> n;
	cout << "nhap ban kinh:  ";
	cin >> r;
	float p = chuVi(n, r);
	cout << "chu vi la: " << p;
	return 0;
}
float chuVi(float n, float r)
{
	return  2 * n * r * sin(M_PI / n);
}