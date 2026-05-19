#ifndef NHANVIENVP_H
#define NHANVIENVP_H

#include "NhanVien.h"

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
