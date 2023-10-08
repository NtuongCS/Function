#include <iostream>
using namespace std;

float tinhTong(float n);

int main()
{
    float n;
    cout << "nhap so n: ";
    cin >> n;
    float sum = tinhTong(n);
    cout << "ket qua la: " << sum;
    return 0;
}
float tinhTong(float n)
{
    float tinhTong = 0;
    for (int i = 1; i <= 2 * n + 1; i = i + 2)
    {
        tinhTong = tinhTong + (float)i / (i + 1);
    }
    return tinhTong;
}