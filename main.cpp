#include <iostream>
#include <cstdlib>
using namespace std;

class HoangTu {
protected:
    int tien;
    int tritue;
    int sucmanh;
public:
    HoangTu(int v1, int v2, int v3) : tien(v1), tritue(v2), sucmanh(v3) {}
};

class GiaoThuong : public HoangTu {
public:
    GiaoThuong(int& v1) : HoangTu(v1, 0, 0) {
        if (v1 >= 0) {
            v1 = v1 - (rand() % 10 + 1) * (rand() % 10 + 1);
        } else {
            cout << "Ban da het tien, out game.\n";
            exit(0);
        }
    }
};

class HocThuat : public HoangTu {
public:
    HocThuat(int& v2) : HoangTu(0, v2, 0) {
        if (v2 >= (rand() % 10 + 1)) {
            v2 = v2;
        } else {
            cout << "Ban ko du tri tue de qua cong, out game.\n";
            exit(0);
        }
    }
};

class SucManh : public HoangTu {
public:
    SucManh(int& v3) : HoangTu(0, 0, v3) {
        if (v3 >= 0) {
            v3 = v3 - (rand() % 10 + 1);
        } else {
            cout << "Ban ko du suc manh, out game.\n";
            exit(0);
        }
    }
};

int main() {
    int tien, tritue, sucmanh;
    cout << "Nhap vao tien cua Hoang Tu: "; cin >> tien;
    cout << "Nhap vao tri tue cua Hoang Tu: "; cin >> tritue;
    cout << "Nhap vao suc manh cua Hoang Tu: "; cin >> sucmanh;

    int n;
    cout << "Hoang tu di qua bao nhieu cong: "; cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cout << "Giao thuong(1), Hoc Thuat(2), Suc Manh(3): \n";
        cin >> x;
        switch (x) {
            case 1:
            {
                GiaoThuong giaothuong(tien);
                cout << "Da nhan du lieu.\n";
                break;
            }
            case 2:
            {
                HocThuat hocthuat(tritue);
                cout << "Da nhan du lieu.\n";
                break;
            }
            case 3:
            {
                SucManh sm(sucmanh);
                cout << "Da nhan du lieu.\n";
                break;
            }
            default:
                cout << "May la thang ngu nhat the gioi.\n";
                exit(0);
        }
    }
    cout << "Du ma Hoang Tu cuu dc cong chua roi ae, qua dak.\n";
    cout << "Hoang Tu con " << tien << " dong, " << tritue << " diem tri tue, " << sucmanh << " diem suc manh.\n";
    return 0;
}
