#include <iostream>
#include<cmath>
using namespace std;

float Kiemtra(int);
int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    cout << "tich= " << Kiemtra(n);
    return 0;
}
float Kiemtra(int nn)
{
    int tich = 1;
    int t = nn;
    if (nn <= 0)
        if (nn == 0)
            tich = 0;
        else
            t = abs(t);
    else t = abs(t);
    
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 != 0)
            tich = tich * dv;
        t = t / 10;
    }
    return tich;
}