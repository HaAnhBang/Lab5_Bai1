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
    cin >> ngay >> thang >> nam;
}

void NhanVien::Xuat()
{
    cout << "Ho ten: " << HoTen << endl;
    cout << "Ngay sinh: " << ngay << "/" << thang << "/" << nam << endl;
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

// ================= NHAN VIEN SAN XUAT =================

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

void NhanVienSX::TinhLuong()
{
    Luong = LuongCanBan + SoSanPham * 5000;
}

void NhanVienSX::Xuat()
{
    cout << "Nhan vien san xuat:" << endl;
    NhanVien::Xuat();
    cout << "Luong can ban: " << LuongCanBan << endl;
    cout << "So san pham: " << SoSanPham << endl;
}

// ================= NHAN VIEN VAN PHONG =================

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

void NhanVienVP::TinhLuong()
{
    Luong = SoNgayLamViec * 100000;
}

void NhanVienVP::Xuat()
{
    cout << "Nhan vien van phong:" << endl;
    NhanVien::Xuat();
    cout << "So ngay lam viec: " << SoNgayLamViec << endl;
}
