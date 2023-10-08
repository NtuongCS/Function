#include <iostream>
using namespace std;


void hoanvi(int& a, int& b);

int main() {
    int a, b;
    cout << "Nhap gia tri a: ";
    cin >> a;
    cout << "Nhap gia tri b: ";
    cin >> b;
    hoanvi(a, b);
    cout << "Sau khi hoan vi: a = " << a << ", b = " << b;
    return 0;
}
void hoanvi(int& aa, int& bb)
{
    int temp = aa;
    aa = bb;
    bb = temp;
}