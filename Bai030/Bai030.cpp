#include <iostream>
using namespace std;

float tinhTong(float n)
{
    float tinhTong = 0;
    for (int i = 1; i <= n; i++)
    {
        tinhTong = tinhTong + 1/(2*i);
    }
    return tinhTong;
}
int main()
{
    float n;
    cout << "nhap so n: ";
    cin >> n;
    float sum1 = tinhTong(n);
    cout << "ket qua la: " << sum1;
    return 0;
}