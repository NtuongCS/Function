#include <iostream>
using namespace std;

void Nhap(int&);
void lietKe(int, int);

int main()
{
    int x, y;
    Nhap(x);
    Nhap(y);
    lietKe(x, y);
    return 0;
}

void Nhap(int& n)
{
    cout << "Nhap gia tri: ";
    cin >> n;
}

void lietKe(int x, int y)
{
    int n = x;
    while (n <= y)
    {
        if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
            cout << n << endl;
        n++;
    }
}