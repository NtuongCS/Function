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
    int flag = 0;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 == 0)
            flag == 1;
        t = t / 10;
    }
    if (flag == 0)
        cout << "la so toan chan";
    else
        cout << "khong toan chan";
}
