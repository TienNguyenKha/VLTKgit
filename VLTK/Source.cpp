#include"Game.h"
#include"Object.h"
#include"NhanVat.h"
int main()
{
	Game a;
	a.Nhap();
	a.FindMax();
	cout << "\nSo sanh: ";
	a.Compare();
	system("pause");
	return 0;
}