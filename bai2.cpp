//Bài 2: Viết chương trình nhập vào số nguyên dương n (n <= 100). Tính và hiển thị tổng các số tự nhiên lẻ từ 1 đến n.
#include <iostream>
using namespace std;

int main()
{
    int n,tong=0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            tong = tong + i;
        }        
    }
    cout << tong;
}