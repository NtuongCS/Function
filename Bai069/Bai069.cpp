#include <iostream>
using namespace std;

void Nhap(float&, float&);
float Tinhtong(float, float);

int main()
{
	float x, n;
	Nhap(x, n);
	cout << Tinhtong(x, n);
	return 0;
}
void Nhap(float& xx, float& nn)
{
	cin >> xx >> nn;
}
float Tinhtong(float xx, float nn)
{
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + t;
		i++;
	}
	return s;
}