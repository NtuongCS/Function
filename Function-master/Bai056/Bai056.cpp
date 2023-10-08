#include <iostream>
using namespace std;

int demUocSo(int n)
{
    int  dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            dem++;
    }
    return dem;
}
int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    int d = demUocSo(n);
    cout << "ket qua la: " << d;
    return 0;
}