#include "Game.h"
void Game::Nhap()
{
	int index;
	Object* temp = new NhanVat;
	while (69)
	{
		system("cls");
		cout << "\n\n\t\t~~~~~~~~~~~~~~~~~~~Menu~~~~~~~~~~~~~~~~~~~";
		cout << "\n\t1.Nhan Vat ";
		cout << "\n\t2.Quai Dau Linh ";
		cout << "\n\t3.Quai thuong ";
		cout << "\n\t0.Cancel ";
		cout << "\nOption: ";
		cin >> index;
		switch (index)
		{
		case 1:
		{
			temp = new NhanVat;
			temp->Nhap();
			arr.push_back(temp);
			break;
		}
		case 2:
		{
			temp = new QuaiDauLinh;
			temp->Nhap();
			arr.push_back(temp);
			break;
		}
		case 3:
		{
			temp = new QuaiThuong;
			temp->Nhap();
			arr.push_back(temp);
			break;
		}
		case 0:
			break;
		default:
			cout << "\nBan nhap sai lua chon ";
			break;
		}
		if (index == 0)
			break;

	}
}
void Game::FindMax()
{
	float a;
	a = arr[0]->Tinhsatthuong();
	int j = 0;
	for (int i = 1; i < arr.size(); i++)
	{
		if (a < arr[i]->Tinhsatthuong())
		{
			a = arr[i]->Tinhsatthuong();
			j = i;
		}
	}
	cout << "\nPhan tu co sat thuong lon nhat o vi tri: " << j << " co muc sat thuong la: " << a;

}
void Game::Compare()
{
	Object* a = new QuaiThuong;
	Object* b = new QuaiThuong;
	cout << "\nNhap a: ";
	a->Nhap();
	cout << "\nNhap b: ";
	b->Nhap();
	float damgea = a->Tinhsatthuong();
	float damgeb = b->Tinhsatthuong();
	if (a->CheckTS(b)==true)
		damgea = damgea + damgea * 10 / (float)100;
	if (b->CheckTS(a))
		damgeb = damgeb + damgeb * 10 / (float)100;
	if (a->checkTK(b))
	{
		damgea = damgea + damgea + 20 / (float)100;
		damgeb = damgeb - damgeb + 20 / (float)100;
	}
	if (b->checkTK(a))
	{
		damgeb = damgeb + damgeb + 20 / (float)100;
		damgea = damgea - damgea + 20 / (float)100;
	}
	if (damgea > damgeb)
		cout << "\nSat thuong cua A cao hon ";
	else if (damgea == damgeb)
		cout << "\nSat thuong A va B bang nhau ";
	else
		cout << "\nSat thuong cua B cao hon ";

}
