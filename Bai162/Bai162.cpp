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
    int flag = 1;
    int t = n;
    while (t >= 10)
    {
        int dv = t % 10;
        int hc = (t / 10) % 10;
        if (hc < dv)
            flag = 0;
        t = t / 10;

    }  
    if (flag == 1)
        cout << "giam";
    else
        cout << "khong giam";
}