// Lab_2.1.cpp
// ������ ��������
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 1

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double Pi = 4 * atan(1.0);

	double x;        // ������� ��������
	double z1;       // ��������� ���������� 1-�� ������
	double z2;       // ��������� ���������� 2-�� ������

	cout << "x = ";
	cin >> x;

	z1 = 2 * (sin(3 * Pi - 2 * x) * sin(3 * Pi - 2 * x)) * (cos(5 * Pi + 2 * x) * cos(5 * Pi + 2 * x));
	z2 = 1. / 4 - 1. / 4 * sin(5. / 2 * Pi - 8 * x);

	cout << endl;

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();

	return 0;

}