#include "Object.h"
void Object::Nhap()
{
	cout << "\n~~~~~Bang He~~~~~~~ 1.Kim 2.Thuy 3.Moc 4.Hoa 5.Tho ";
	cout << "\nNhap He ";
	cin >> He;
	cout << "\nNhap level ";
	cin >> Level;
}
bool Object::CheckTS(Object* b)
{
	if ((He - b->He == -1) || (He - b->He == 4))
		return true;
	return false;
}
bool Object::checkTK(Object* b)
{
	if ((He - b->He == -2) || (He - b->He == 3))
		return true;
	return false;
}