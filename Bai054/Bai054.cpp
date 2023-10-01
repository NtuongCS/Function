#include <iostream>
using namespace std;

int tichUocSo(int n)
{
    int  tong = 0;
    for (int i = 1; i <= n; i=i+2)
    {
        if (n % i == 0)
            tong +=i;
    }
    return tong;
}
int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    int t = tichUocSo(n);
    cout << "ket qua la: " << t;
    return 0;
}