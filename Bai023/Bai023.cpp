#include<iostream>;
using namespace std;

int hc(int n)
{
	int hc = (n/10)%10;
	return hc;
}
int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	cout << "chu so hang chuc la: " << hc(n);
	return 0;
}