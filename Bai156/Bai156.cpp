#include <iostream>
using namespace std;

void Nhap(int&);
float tinh(int);

int main()
{
    int n;
    Nhap(n);
    tinh(n);
    cout << "ket qua la: " << tinh(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap so : ";
    cin >> n;
}
float tinh(int n)
{
    int t = 1;
    for (int i = 1; i <= n; i++)
    {
        t = t * i;
    }
    return t;
}