#include "NhanVat.h"
void NhanVat::Nhap()
{
	Object::Nhap();
	cout << "\nPhai: 1.Thieu lam 2. Thien Vuong 3.Ngu Doc Giao 4.Duong Mon 5.Nga My 6.Thuy Yen Mon 7.Cai Bang 8.Thien Nhan Giao 9.Con Lon 10.Vo Dang ";
	cout << "\nNhap Phai: ";
	cin >> Phai;
}
float NhanVat::Tinhsatthuong()
{
	float a;
	a = Level * 5;
	return a;
}
