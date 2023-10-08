#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&);
void kiemTra(float, float, float);

int main()
{
	float x, y, z;
	Nhap(x);
	Nhap(y);
	Nhap(z);
	kiemTra(x, y, z);
	return 0;
}
void Nhap(float& x)
{
	cout << "Nhap: ";
	cin >> x;
}
void kiemTra(float x, float y, float z)
{
	if (x<=y && y<=z)
		cout << "bdt dung";
	else
		cout << "bdt sai";
}