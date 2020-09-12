#pragma once
#include"NhanVat.h"
#include"QuaiDauLinh.h"
#include"QuaiThuong.h"
#include<vector>

class Game
{
private:
	vector<Object*>arr;
public:
	void Nhap();
	void FindMax();
	void Compare();
};

