#include"PhanSo.h"
int main()
{
	PhanSo a, b, c;
	cout << "\nNhap phan so a: ";
	cin >> a;
	
	cout << "\nNhap phan so b: ";
	cin >> b;
	cout << "\nTong 2 phan so: ";
	c = a + b;
	cout << c;
	cout << "\nHieu 2 phan so: ";
	c = a - b;
	cout << c;
	system("pause");
	return 0;
}