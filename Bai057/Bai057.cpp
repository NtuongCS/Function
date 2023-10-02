#include <iostream>
#include<cmath>
using namespace std;

float Tong(int);
int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    cout << "s= " << Tong(n);
    return 0;
}
float Tong(int nn)
{
    float s = 0;
    for (int i = 1; i < nn; i = i + 1)
    {
        if (nn % i == 0)
            s = s + i;
    }
    return s;
}