#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
float Tinh(float);

int main()
{
	int a;
	Nhap(a);
	cout<<"f= "<<Tinh(a);
	return 0;
}
void Nhap(int& a)
{
	cout << "Nhap : ";
	cin >> a;
}
float Tinh(float x)
{
	float f;
	if (x >= 5)
		f = 2 * x * x + 5 * x + 9;
	else
		f = -2 * x * x + 4 * x - 9;
	return f;
}