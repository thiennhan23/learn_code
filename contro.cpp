#include <iostream>
#include <string>
using namespace std;

struct  Con_nguoi
{
    Con_nguoi(string ht,int t, float v1, float cc)
    {
        ho_ten =ht;
        tuoi = t;
        vong_mot = v1;
        chieu_cao = cc;
    }
    int tuoi;
    float vong_mot;
    float chieu_cao;
    string ho_ten;
};


int main()
{
    Con_nguoi hoi_phu_nu[5] = 
    {
        Con_nguoi ("Thao",22, 95, 1.65),
        Con_nguoi ("Lan",18, 90, 1.70),
        Con_nguoi ("Huong",25, 85, 1.62),
        Con_nguoi ("Nhung",16, 80, 1.63),
        Con_nguoi ("Tuyet",30, 100, 1.65)
    };
    

    Con_nguoi *bo_nhi = nullptr; // khai bao

    // for (int i = 0; i <5 ;i++)
    // {
    //     cout << (hoi_phu_nu[i]).ho_ten << endl;
    // }
    for(bo_nhi=hoi_phu_nu;hoi_phu_nu+5;bo_nhi++)
    {
        cout << (*bo_nhi).ho_ten << endl;
    }
    return 0;
}