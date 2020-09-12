#include "PhanSo.h"
//cc
istream& operator>>(istream& input, PhanSo& ps)
{
	cout << "\nnhap tu " << endl;
	input >> ps.tu;
	do
	{
		if (ps.tu == 0)
		{
			ps.mau = 1;
			break;
		}
		cout << "\nnhap mau " << endl;
		input >> ps.mau;
		if (ps.mau == 0)
			cout << "\nNhap lai mau ";
	} while (ps.mau == 0);
	ps.RutGon();
	return input;
}
ostream& operator<<(ostream& out, PhanSo ps)
{
	if (ps.tu == 0)
		out << 0;
	else if (ps.mau == 0)
		out << "\ninf";
	else if (ps.mau == 1)
		out << ps.tu;
	else
		out << ps.tu << "/" << ps.mau;
	return out;
}
bool PhanSo::operator ==(PhanSo ps)
{
	double a, b;
	a = (double)tu / mau;
	b = (double)ps.tu / ps.mau;
	if (a == b)
		return true;
	else
		return false;
}
bool PhanSo::operator !=(PhanSo a)
{
	if (*this == a)
		return false;
	else
		return true;
}
PhanSo operator+(PhanSo a, PhanSo b)
{
	PhanSo temp;
	temp.tu = a.tu * b.mau + b.tu * a.mau;
	temp.mau = a.mau * b.mau;
	temp.RutGon();
	return temp;
}
PhanSo operator-(PhanSo a, PhanSo b)
{
	PhanSo temp;
	if (a != b)
	{
		temp.tu = a.tu * b.mau - b.tu * a.mau;
		temp.mau = a.mau * b.mau;
		temp.RutGon();
	}
	else
	{
		temp.tu = 0;
		temp.mau = 1;
	}
	return temp;
}