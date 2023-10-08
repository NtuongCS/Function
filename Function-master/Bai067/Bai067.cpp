#include <iostream>
#include<cmath>
using namespace std;

void Kiemtra(int);
int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    cout << "thong bao:  ";
    Kiemtra(n);
    return 0;
}
void Kiemtra(int n)
{
    int flag=0;
    int t = n;
    if (t<0)
    {
        t = abs(n);
    }
    while (t != 0)
    {
        int dv = t % 10;
        if (dv%2!=0)
            flag=1;
        t = t / 10;
    }
    if (flag == 1)
        cout << "TT";
    else
        cout << "ko TT";
}