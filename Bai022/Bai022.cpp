#include<iostream>;
using namespace std;

int donVi(int n)
{
	int dv = n % 10;
	return dv;
}
int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	int dVi = donVi(n);
	cout << "chu so hang don vi la: " << dVi;
	return 0;
}