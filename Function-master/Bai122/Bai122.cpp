#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

void timSoHang(int);

int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	timSoHang(n);
}

void timSoHang(int n)
{
	float at = 1;
	float bt = 1;
	int i = 2;
	float ahh;
	float bhh;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << ahh<<" " << bhh;

}