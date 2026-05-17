#include "NhanVien.h"
#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "So nhan vien san xuat: ";
    cin >> n;
    cin.ignore();

    NhanVienSX** a = new NhanVienSX*[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap nhan vien san xuat thu " << i + 1 << endl;
        a[i] = new NhanVienSX();
        a[i]->Nhap();
        cin.ignore();
    }

    cout << "\nSo nhan vien van phong: ";
    cin >> m;
    cin.ignore();

    NhanVienVP** b = new NhanVienVP*[m];

    for (int i = 0; i < m; i++)
    {
        cout << "\nNhap nhan vien van phong thu " << i + 1 << endl;
        b[i] = new NhanVienVP();
        b[i]->Nhap();
        cin.ignore();
    }

    cout << "\n===== DANH SACH NHAN VIEN SAN XUAT =====" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhan vien thu " << i + 1 << endl;
        a[i]->Xuat();
    }

    cout << "\n===== DANH SACH NHAN VIEN VAN PHONG =====" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "\nNhan vien thu " << i + 1 << endl;
        b[i]->Xuat();
    }

    long long TongLuong = 0;

    for (int i = 0; i < n; i++)
        TongLuong += a[i]->GetLuong();

    for (int i = 0; i < m; i++)
        TongLuong += b[i]->GetLuong();

    cout << "\nTong luong cong ty phai tra: " << TongLuong << endl;

    cout << "\n===== NHAN VIEN SAN XUAT CO LUONG THAP NHAT =====" << endl;

    if (n > 0)
    {
        long long minLuong = a[0]->GetLuong();

        for (int i = 1; i < n; i++)
        {
            if (a[i]->GetLuong() < minLuong)
                minLuong = a[i]->GetLuong();
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i]->GetLuong() == minLuong)
                a[i]->Xuat();
        }
    }

    cout << "\n===== NHAN VIEN VAN PHONG CO TUOI CAO NHAT =====" << endl;

    if (m > 0)
    {
        int namSinhNhoNhat = b[0]->GetNamSinh();

        for (int i = 1; i < m; i++)
        {
            if (b[i]->GetNamSinh() < namSinhNhoNhat)
                namSinhNhoNhat = b[i]->GetNamSinh();
        }

        for (int i = 0; i < m; i++)
        {
            if (b[i]->GetNamSinh() == namSinhNhoNhat)
                b[i]->Xuat();
        }
    }

    for (int i = 0; i < n; i++)
        delete a[i];

    for (int i = 0; i < m; i++)
        delete b[i];

    delete[] a;
    delete[] b;

    return 0;
}
