#include <iostream>
#include <cmath>
using namespace std;

bool LaSoNguyenTo(int n)
{
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Cac so nguyen to tu 0 den " << n << " la: ";
    for (int i = 0; i <= n; i++) {
        if (LaSoNguyenTo(i)) {
            cout << i << " ";
        }
    }
    return 0;
}