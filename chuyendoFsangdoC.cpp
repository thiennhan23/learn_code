//Bài 3: Viết chương trình nhập nhiệt độ F từ bàn phím rồi tính và hiển thị nhiệt độ đó ở độ C
#include <iostream>
using namespace std;

int main()
{
    float degF=0, degC=0;
    cout << "Nhap nhiet do F" << endl;
    cin >> degF;
    degC = (degF - 32) / 1.8;
    cout << "Nhiet do la " << degC << " do C" << endl;

}