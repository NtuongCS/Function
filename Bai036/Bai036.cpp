#include <iostream>
using namespace std;

float tinhTich(float x, int n)
{
    float tinhTich = 1;
    for (int i = 1; i <= n; i++)
    {
        tinhTich = tinhTich * x;
    }
    return tinhTich;
}
int main()
{
    float x;
    cout << "nhap so x: ";
    cin >> x;
    int n;
    cout << "nhap n: ";
    cin >> n;
    float tich = tinhTich(x, n);
    cout << "ket qua la: " << tich;
    return 0;
}