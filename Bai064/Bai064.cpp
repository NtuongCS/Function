#include <iostream>
using namespace std;

int chuSoMax(int n)
{
	int t = n;
	int lc = n % 10;
	int dv;
	while (t != 0)
	{
	    dv = t % 10;
		if (dv > lc)
		{
			lc = dv;
		}
		t = t / 10;
	}
	return lc;
}
int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	cout << "chu so lon nhat la: " << chuSoMax(n);
	return 0;

}

