#include <iostream>
using namespace std;

void Nhap(int&);
void kiemTra(int);

int main()
{
    int n;
    Nhap(n);
    kiemTra(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap so : ";
    cin >> n;
}
void kiemTra(int n)
{
    int dn = 0;
    int t = n;
    while (t != 0)
    {
        int dv = t % 10;
        dn = dn * 10 + dv;
        t = t / 10;

    }
    if (dn == n)
        cout << "la so dao nguoc";
    else
        cout << "khong la so dao nguoc";
}