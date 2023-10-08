#include <iostream>
#include<cmath>
using namespace std;

void Nhap(int&);
int timBoi(int, int);

int main()
{
    int a, b;
    Nhap(a);
    Nhap(b);
    timBoi(a,b);
    cout << "boi chung nho nhat la: " << timBoi(a, b);
    return 0;
}

void Nhap(int& n)
{
    cout << "Nhap gia tri: ";
    cin >> n;
}
int timBoi(int a, int b)
{
    int m = abs(a);
    int n = n = abs(b);
    while (m * n != 0)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    int bcnn = abs(a * b) / (m + n);
    return bcnn;
}
