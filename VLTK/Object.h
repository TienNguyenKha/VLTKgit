#pragma once
#include<iostream>
using namespace std;
class Object
{
protected:
	int He, Level;
public:
	virtual void Nhap();
	virtual float Tinhsatthuong() = 0;
	 bool CheckTS(Object*);
	 bool checkTK(Object*);
	Object(){}
	Object(int a, int b)
	{
		He = a;
		Level = b;
	}
	~Object()
	{

	}

};

