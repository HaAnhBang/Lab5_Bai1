#include "NhanVien.h"

NhanVien::NhanVien()
{
    HoTen = "";
    ngay = thang = nam = 0;
    Luong = 0;
}

NhanVien::~NhanVien()
{
}

void NhanVien::Nhap()
{
    cout << "Nhap ho ten: ";
    getline(cin, HoTen);

    cout << "Nhap ngay sinh: ";
    cin >> ngay;

    cout << "Nhap thang sinh: ";
    cin >> thang;

    cout << "Nhap nam sinh: ";
    cin >> nam;
}

void NhanVien::Xuat()
{
    cout << "Ho ten: " << HoTen << endl;
    cout << "Ngay sinh: "
         << ngay << "/" << thang << "/" << nam << endl;
    cout << "Luong: " << Luong << endl;
}

long long NhanVien::GetLuong()
{
    return Luong;
}

int NhanVien::GetNamSinh()
{
    return nam;
}
