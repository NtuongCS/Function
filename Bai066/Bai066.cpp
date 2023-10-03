#include <iostream>
using namespace std;

int tonTai(int);

int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	int check = tonTai(n) ;
	if (check == 1)
		cout << "tt";
	else
		cout << "khong tt";
}
int tonTai(int n)
{
	int t = n;
	int  flag = -0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
		{
			flag = 1;

		}
		t = t / 10;
	}
	return flag;
}