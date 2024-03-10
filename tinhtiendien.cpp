
#include <iostream>
using namespace std;

int NhapSoDien(int so_dien)
{
    while (so_dien <= 0)
    {
        cout << "Nhap lai so dien cho hop le " << endl;
        cin >> so_dien;
    }
    return so_dien;
};

void TinhTienDien(int so_dien)
{
    int tien_dien;
    if (so_dien <= 50)
    {
        tien_dien = so_dien * 1000;
        cout << "Tong tien dien la " << tien_dien;
    }
    else if (so_dien <= 100)
    {
        tien_dien = (50*1000) + (so_dien - 50) * 2000;
        cout << "Tong tien dien la " << tien_dien;
    }
    else
    {
        tien_dien = (50 * 1000) + (1000 * 2000) + (so_dien - 150) * 3000;
        cout << "Tong tien dien la " << tien_dien;
    }
};

int main()
{
    int so_dien, tien_dien;
    cout << "Nhap so dien " << endl;
    cin >> so_dien;
    so_dien = NhapSoDien(so_dien);
    tien_dien = TinhTienDien(so_dien);    
}