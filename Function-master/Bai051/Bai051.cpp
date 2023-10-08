#include <iostream>
#include<cmath>
using namespace std;

float Tong(int);
int main()
{
    int n;
    cout << "nhap so n: ";
    cin >> n;
    cout << "t= " << Tong(n);
    return 0;
}
float Tong(int nn)
{
    float t = 1;
    for (int i = 1; i <= nn; i++)
    {
        if (nn % i == 0)
            t = t * i;
    }
    return t;
}