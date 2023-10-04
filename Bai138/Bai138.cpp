#include <iostream>
using namespace std;

void Nhap(float&);
float tinh(float);

int main()
{
    float x;
    Nhap(x);
    cout << "ket qua la: " << tinh(x);
    tinh(x);
    return 0;
}
    void Nhap(float& x)
    {
        cout << "Nhap: ";
        cin >> x;
    }
float tinh(float x)
{
    float f;
    if (x >= 0)
    {
        if (x <= 1)
            f = 5 * x - 7;
        else
            f = 2 * x * x * x + 5 * x * x - 8*x + 3;

    }
    else
        f = 2 * x * x * x + 6*x + 9;
    return f;
}