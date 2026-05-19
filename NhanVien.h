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

    virtual void Nhap();
    virtual void Xuat();

    virtual void TinhLuong() = 0;

    long long GetLuong();
    int GetNamSinh();
};

#endif
