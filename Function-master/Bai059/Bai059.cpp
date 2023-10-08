#include <iostream>
#include<cmath>
using namespace std;

float Kiemtra(int);
int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    cout << "dem= " << Kiemtra(n);
    return 0;
}
float Kiemtra(int nn)
{
    int dem = 0;
    int t = nn;
    while (t != 0)
    {
        dem = dem + 1;
        t = t / 10;
    }
    return dem;
}