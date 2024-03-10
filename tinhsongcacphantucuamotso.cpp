#include <iostream>
using namespace std;

int main() {
    int n, tong = 0;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> n;

    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }

    cout << "Tong cac chu so cua so vua nhap la: " << tong << endl;

    return 0;
}
