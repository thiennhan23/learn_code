#include <iostream>
using namespace std;

int main()
{
    cout << "Nhap a va b " << endl;
    float a,b,x;
    cin >> a;
    cin >>b;
    
    if (a==0 && b==0)
    {
        cout << "Phuong trinh co vo so nghiem " <<endl;
    }
    else if(a==0 && b!=0)
    {
        cout << "Phuong trinh vo nghiem " <<endl;
    }
    else if(a != 0)
    {
        x = -b/a;
        cout << "Nghiem cua phuong trinh la " << x << endl;
    }
    return 0;
}