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
    int i = 1;
    int dem = 0;
    while (i <= n)
    {
        if (n % i == 0)
            dem++;
        i++;
    }
    if (dem == 2)
        cout << "la so nguyen to";
    else
        cout << "khong la so nguyen to";
}