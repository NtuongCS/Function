#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
void Tinh(float , float , float );

int main()
{
	int a, b, c;
	Nhap(a);
	Nhap(b);
	Nhap(c);
	Tinh(a, b, c);
	return 0;
}
void Nhap(int& a)
{
	cout << "Nhap : ";
	cin >> a;
}
void Tinh(float x, float y, float z)
{
	if (x + y > z && x + z > y && y + z > x)
		if (x == y && y == z)
			cout << "deu";
		else
			if (x * x == y * y + z * z ||
				y * y == x * x + z * z ||
				z * z == x * x + y * y)
				if (x == y || y == z || z == x)
					cout << "vuong can";
				else
					cout << "vuong";
			else
				if (x == y || y == z || z == x)
					cout << "can";
				else
					cout << "thuong";
	else
		cout << "ko";
}