#include <iostream>
#include<cmath>
using namespace std;

float tinhTong(float n)
{
    float tinhTong = 0;
    for (int i = 1; i <= n; i++)
    {
        tinhTong += sqrt(1 + (float)1 / (i * i) + (float)1 / pow(i + 1, 2));
    }
    return tinhTong;
}
int main()
{
    float n;
    cout << "nhap so n: ";
    cin >> n;
    float sum = tinhTong(n);
    cout << "ket qua la: " << sum;
    return 0;
}