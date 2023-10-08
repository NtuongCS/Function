#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float chuvi(float);

int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;
	cout << "p= " <<setprecision(4)<< chuvi(r);
}
float chuvi(float rr)
{
	float p = 2 * M_PI * rr;
	return p;
}