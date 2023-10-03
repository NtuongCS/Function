#include <iostream>
using namespace std;

int tichUocSo(int n);

int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    int t = tichUocSo(n);
    cout << "ket qua la: " << t;
    return 0;
}
int tichUocSo(int n)
{
    int  tich = 1;;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            tich += i;
    }
    return tich;
}
