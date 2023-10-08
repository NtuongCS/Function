#include <iostream>
using namespace std;

int tongUocSo(int );

int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    int sum = tongUocSo(n);
    cout << "ket qua la: " << sum;
    return 0;
}
int tongUocSo(int n)
{
    int tong = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            tong += i;
    }
    return tong;
}
        
