#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void nhap(float&, float&);
void xuat(float, float);
double dientich(float, float, float, float, float, float);
void kiemTra(float, float, float, float);

int main()
{
    float xA, yA;
    nhap(xA, yA);
    cout << "Diem A: ";
    xuat(xA, yA);
    cout << endl;

    float xB, yB;
    nhap(xB, yB);
    cout << "Diem B: ";
    xuat(xB, yB);
    cout << endl;

    float xC, yC;
    nhap(xC, yC);
    cout << "Diem C: ";
    xuat(xC, yC);
    cout << endl;

    float xM, yM;
    nhap(xM, yM);
    cout << "Diem M: ";
    xuat(xM, yM);
    cout << endl;

    double sABC = dientich(xA, yA, xB, yB, xC, yC);
    double sMAB = dientich(xA, yA, xB, yB, xM, yM);
    double sMBC = dientich(xB, yB, xC, yC, xM, yM);
    double sMAC = dientich(xA, yA, xC, yC, xM, yM);

    kiemTra(sABC, sMAB, sMAC, sMBC);

    return 0;
}

void nhap(float& xx, float& yy)
{
    cout << "Nhap hoanh do: ";
    cin >> xx;
    cout << "Nhap tung do: ";
    cin >> yy;
}

void xuat(float x, float y)
{
    cout << "(" << x << ", " << y << ")";
}

double dientich(float xA, float yA, float xB, float yB, float xC, float yC)
{
    return 0.5 * abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC);
}

void kiemTra(float sABC, float sMAB, float sMAC, float sMBC)
{

    if ( sABC== sMAB + sMBC + sMAC)
        cout << "Diem M thuoc tam giac ABC.\n";
    else
        cout << "Diem M khong thuoc tam giac ABC.\n";
}

	void xuat(float xx, float yy)
	{
		cout << "Hoanh do: " << xx;
		cout << "Tung do: " << yy;
	}