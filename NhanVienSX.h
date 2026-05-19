#ifndef NHANVIENSX_H
#define NHANVIENSX_H

#include "NhanVien.h"

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

#endif
