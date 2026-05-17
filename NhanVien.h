#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
    string HoTen;
    int ngay, thang, nam;
    long long Luong;

public:
    NhanVien();
    virtual ~NhanVien();

    // Input: Nhap lan luot ho ten va ngay sinh
    virtual void Nhap();

    // Output: xuat thong tin chung
    virtual void Xuat();

    // moi lop con tu cai dat cach tinh luong rieng
    virtual void TinhLuong() = 0;

    // return Luong
    long long GetLuong();

    // return nam
    int GetNamSinh();
};

class NhanVienSX : public NhanVien
{
private:
    int LuongCanBan;
    int SoSanPham;

public:
    NhanVienSX();
    ~NhanVienSX();

    void Nhap();
    void Xuat();
    void TinhLuong();
};

class NhanVienVP : public NhanVien
{
private:
    int SoNgayLamViec;

public:
    NhanVienVP();
    ~NhanVienVP();

    void Nhap();
    void Xuat();
    void TinhLuong();
};

#endif
