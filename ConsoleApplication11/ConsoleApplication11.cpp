#include "stdafx.h"
#include "iostream"
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0x5FABFF01;
	cout << "������ �������������� ��������: " << hex << ((a & 0xFF00)>>8) << endl;
	cout << "������ �������������� ��������: " << !((a&(1 << 7)) >> 7) << endl;
	cout << "������ �������������� ��������: " << hex << (((a&(1 << 20))>>20)|((a&(1 << 19)) >> 18)|((a&(1 << 18)) >> 16)|((a&(1 << 17)) >> 14)) << endl;
	system("Pause");
    return 0;
}

