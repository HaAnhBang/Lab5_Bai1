#include "NhanVienVP.h"

NhanVienVP::NhanVienVP()
{
    SoNgayLamViec = 0;
}

NhanVienVP::~NhanVienVP()
{
}

void NhanVienVP::Nhap()
{
    NhanVien::Nhap();

    cout << "Nhap so ngay lam viec: ";
    cin >> SoNgayLamViec;

    TinhLuong();
}

void NhanVienVP::Xuat()
{
    NhanVien::Xuat();

    cout << "So ngay lam viec: " << SoNgayLamViec << endl;
}

void NhanVienVP::TinhLuong()
{
    Luong = SoNgayLamViec * 100000;
}
