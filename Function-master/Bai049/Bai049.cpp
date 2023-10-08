#include <iostream>
#include<cmath>
using namespace std;

void Tong(int);
int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    Tong(n);
    return 0;
}
void Tong(int nn)
{
    for (int i = 1; i <= nn; i++)
    {
        if (nn % i == 0)
            cout << i<<" ";
    }
}