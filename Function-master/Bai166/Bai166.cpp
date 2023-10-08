#include <iostream>
using namespace std;

void Nhap(int&);
int tinh(int);

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
int tinh(int n)
{
    int t = 1;
    int k = 1;
    while (2 * t <= n)
    {
        t = t * 2;
        k++;
    }
    return k;
}