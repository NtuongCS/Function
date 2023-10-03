#include<iostream>;
using namespace std;

int hangTram(int);

int main()
{
	int n;
	cout << "nhap so n: ";
	cin >> n;
	int hTram = hangTram(n);
	cout << "chu so hang tram la: " << hTram;
	return 0;
}
int hangTram(int n)
{
	int ht = (n / 100) % 10;
	return ht;
}
