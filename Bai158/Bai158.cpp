#include <iostream>
using namespace std;

void Nhap(int&);
int dem(int);

int main()
{
    int n;
    Nhap(n);
    dem(n);
    cout << "ket qua la: " << dem(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap so : ";
    cin >> n;
}
int dem(int n)
{
    int lc = n % 10;
    int t = n;
    int dem = 0;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv > lc)
            lc = dv;
        t = t / 10;
   
    }
    t = n;
    int dv;
    while (t != 0)
    {
        dv = t % 10;
        if (dv == lc)
            dem++;
        t = t / 10;

    }
    return dem;

}