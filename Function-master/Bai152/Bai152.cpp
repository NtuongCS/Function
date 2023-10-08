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
    int t = n;
    int flag = 1;
    while (t > 1)
    {
        int du = t % 3;
        if (du != 0)
            flag = 0;
        t = t / 3;
    }
    if (flag == 1)
        cout << "la dang";
    else
        cout << "khong la dang";
}