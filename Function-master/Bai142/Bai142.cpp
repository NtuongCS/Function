#include <iostream>
using namespace std;

void Nhap(int&);
int timDaoNguoc(int);

int main()
{
    int n;
    Nhap(n);
    cout << "ket qua la: " << timDaoNguoc(n);
    timDaoNguoc(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap so : ";
    cin >> n;
}
int timDaoNguoc(int n)
{
    int dn = 0;
    int t = n;
    while (t != 0)
    {
        int dv = t % 10;
        dn = dn * 10 + dv;
        t = t / 10;
        
    }
    return dn;
}