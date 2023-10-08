#include <iostream>
using namespace std;

float timMax(float,float);

int main()
{
    float a;
    cout << "nhap so a: ";
    cin >> a;
    float b;
    cout << "nhap so b: ";
    cin >> b;
    cout << "so lon hon la: " << timMax(a, b);


}
float timMax(float a, float b)
{
    float lc = a;
    if (lc < b)
        lc = b;
    return lc;
}