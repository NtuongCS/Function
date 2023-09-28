#include <iostream>
using namespace std;


void hoanVi(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int x, y;
    cout << "Nhap gia tri x: ";
    cin >> x;
    cout << "Nhap gia tri y: ";
    cin >> y;
    hoanVi(x, y);
    cout << "Sau khi hoan vi: x = " << x << ", y = " << y;
    return 0;
}