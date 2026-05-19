#include "NhanVienSX.h"

NhanVienSX::NhanVienSX()
{
    LuongCanBan = 0;
    SoSanPham = 0;
}

NhanVienSX::~NhanVienSX()
{
}

void NhanVienSX::Nhap()
{
    NhanVien::Nhap();

    cout << "Nhap luong can ban: ";
    cin >> LuongCanBan;

    cout << "Nhap so san pham: ";
    cin >> SoSanPham;

    TinhLuong();
}

void NhanVienSX::Xuat()
{
    NhanVien::Xuat();

    cout << "Luong can ban: " << LuongCanBan << endl;
    cout << "So san pham: " << SoSanPham << endl;
}

void NhanVienSX::TinhLuong()
{
    Luong = LuongCanBan + SoSanPham * 5000;
}
