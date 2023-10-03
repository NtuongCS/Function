#include <iostream>
using namespace std;

int tinhTong(int n);

int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    int sum = tinhTong(n);
    cout << "ket qua la: " << sum;
    return 0;
}
int tinhTong(int n)
{
    int tinhTong = 0;
    for (int i = 1; i <= n; i++)
    {
        tinhTong += i * i * i * i;
    }
    return tinhTong;
}