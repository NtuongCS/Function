#include <iostream>
#include <cmath>
using namespace std;

void nhap(float&, float&);
void xuat(float, float);
float khoangcach(float, float, float, float);

int main()
{
	float x1, y1;
	nhap(x1, y1);
	cout << "\nDiem thu nhat: ";
	xuat(x1, y1);
	cout << "\n";

	float x2, y2;
	nhap(x2, y2);
	cout << "\nDiem thu hai: ";
	xuat(x2, y2);
	cout << "\n";

	float x3, y3;
	nhap(x3, y3);
	cout << "\nDiem thu ba: ";
	xuat(x3, y3);
	cout << "\n";

	float a= khoangcach(x1, y1, x2, y2);
	float b = khoangcach(x1, y1, x2, y2);
	float c = khoangcach(x1, y1, x2, y2);
	if (a + b > c && a + c > b && b + c > a)
		cout << "la TG";
	else
		cout << "ko la TG";
	return 0;

}
void nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}

void xuat(float xx, float yy)
{
	cout << "Hoanh do: " << xx;
	cout << "Tung do: " << yy;
}

float khoangcach(float x1, float y1, float x2, float y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
