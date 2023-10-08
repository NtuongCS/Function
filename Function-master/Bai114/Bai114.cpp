#include <iostream>
#include <cmath>
using namespace std;

float timSoHang(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	cout << "so hang thu "<<n<<" la " << timSoHang(n);
}
float timSoHang(int n)
{
	float at = -2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	float ahh;
	while (i <= n)
	{
		tt = tt * 3;
		pp = pp * 7;
	    ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i++;
		at = ahh;
	}
	return ahh;
}