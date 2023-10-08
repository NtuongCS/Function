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
    int ahh = n;
    cout << ahh;
    while (ahh != 1)
    {
        if (ahh % 2 == 0)
            ahh = ahh / 2;
        else
            ahh = 3 * ahh + 1;
        return ahh;
    }
}