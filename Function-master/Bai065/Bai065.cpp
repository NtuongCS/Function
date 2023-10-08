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
float Kiemtra(int n)
{
    int lc;
    int t = n;
    if (t == 0)
        lc = 0;
    else
    {
        t = abs(n);
        lc = t % 10;
    }
    while (t != 0)
    {
        int dv = t % 10;
        if (dv<lc )
            lc=dv;
        t = t / 10;
    }
    return lc;
}