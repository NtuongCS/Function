#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int&);
void Tinhsohang(int);

int main()
{
	int n;
	Nhap(n);
	Tinhsohang(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
void Tinhsohang(int n)
{
	float bt = 1;
	float at = 2;
	int i = 2;
	float ahh, bhh;

	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << "ahh= " << setprecision(3) << ahh << endl;
	cout << "bhh= " << setprecision(3) << bhh;
}