#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void nhap(float&, float&);
void xuat(float, float);
double dientich(float, float, float, float, float, float);
void kiemtra(float, float, float, float);
int main()
{
	float xA, yA;
	nhap(xA, yA);
	cout << "\nDiem  A: ";
	xuat(xA, yA);
	cout << "\n";
	float xB, yB;
	nhap(xB, yB);
	cout << "\nDiem  B: ";
	xuat(xB, yB);
	cout << "\n";
	float xC, yC;
	nhap(xC, yC);
	cout << "\nDiem  C: ";
	xuat(xC, yC);
	cout << "\n";
	float xM, yM;
	nhap(xM, yM);
	cout << "\nDiem  M: ";
	xuat(xM, yM);
	cout << "\n";
	double sABC = dientich(xA, yA, xB, yB, xC, yC);
	double sMAB = dientich(xA, yA, xB, yB, xM, yM);
	double sMBC = dientich(xB, yB, xC, yC, xM, yM);
	double sMAC = dientich(xA, yA, xC, yC, xM, yM);

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