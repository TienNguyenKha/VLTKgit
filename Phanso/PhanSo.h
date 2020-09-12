#pragma once
#include<iostream>
using namespace std;
class PhanSo
{
private:
	int tu, mau;
public:
	PhanSo()
	{
		tu = 1;
		mau = 1;
	}
	PhanSo(int a)
	{
		tu = a;
		mau = 1;
	}
	PhanSo(int a, int b)
	{
		tu = a;
		mau = b;
	}
	PhanSo RutGon()
	{
		int a, b;
		a = abs(this->tu);
		b = abs(this->mau);
		if (this->tu != 0)
		{
			while (a != b)
			{
				if (a > b)
					a -= b;
				else
					b -= a;
			}

			this->tu /= a;
			this->mau /= a;
		}
		return *this;
	}
	bool operator ==(PhanSo);
	bool operator !=(PhanSo);
	friend istream& operator>>(istream&, PhanSo&);
	friend ostream& operator<<(ostream&, PhanSo);
	friend PhanSo operator+(PhanSo, PhanSo);
	friend PhanSo operator-(PhanSo, PhanSo);
};