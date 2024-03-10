//Bài 4: Viết chương trình nhập vào một số n từ bàn phím. Hãy kiểm tra xem n có phải số nguyên tố hay không.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    bool isPrime = true;

    cout << "Nhap mot so nguyen duong: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else if (n == 2) {
        isPrime = true;
    } else if (n % 2 == 0) {
        isPrime = false;
    } else {
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " la so nguyen to";
    } else {
        cout << n << " khong phai la so nguyen to";
    }

    return 0;
}