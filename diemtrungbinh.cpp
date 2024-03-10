#include <iostream>
using namespace std;


float DiemTrungBinh(float diem_van, float diem_toan,float diem_anh)
{
    float diem_trung_binh = ((diem_toan*2+diem_van*2+diem_anh)/5);
    return diem_trung_binh;
};

void XepHang(float diem_trung_binh)
{
    if (diem_trung_binh < 5)
    {
        cout << "Hoc sinh kem" << endl;
    }
    else if (diem_trung_binh >=5 && diem_trung_binh <8)
    {
        cout << "Hoc sinh kha" << endl;
    }
    else
    {
        cout << "Hoc sinh gioi" << endl;
    }
};

int main()
{
    float diem_toan, diem_van, diem_anh, diem_trung_binh;
    cout << "Nhap diem " << endl;
    cin >> diem_van >> diem_toan >> diem_anh;
    diem_trung_binh = DiemTrungBinh(diem_van,diem_toan,diem_anh);
    cout << diem_trung_binh << endl;
    XepHang(diem_trung_binh);
}