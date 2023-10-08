#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&);
void giai(float, float, float);

int main()
{
	float a, b, c;
	Nhap(a);
	Nhap(b);
	Nhap(c);
	giai(a, b, c);
	return 0;
}
void Nhap(float& a)
{
	cout << "Nhap: ";
	cin >> a;
}
void giai(float a, float b, float c)
{
	float delta = b * b - 4 * a * c;
	if (delta < 0)
		cout << "vo nghiem";
	else if (delta == 0)
		cout << "phuong trinh co nghiem kep: " << -b / a;
	else cout << "phuong trinh co 2 nghiem: " << -b - sqrt(delta) / 2 * a << "  " << -b + sqrt(delta) / 2 * a;
}
