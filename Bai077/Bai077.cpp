#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&);
float Tinhtong(float, float);

int main()
{
	float k, n;
	Nhap(k, n);
	cout << Tinhtong(k, n);
	return 0;
}
void Nhap(float& k, float& n)
{
	cin >> k >> n;
}
float Tinhtong(float k, float n)
{
	float s = 0;
	int i = 1;
	while (i <=  n)
	{
		s = s + pow(i,k);
		i = i + 1;
	}
	return s;
}