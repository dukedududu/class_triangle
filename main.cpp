#include<iostream>
#include<Cmath>
#include"triangle.h"
using namespace std;
int main()
{
	Triangle tri1;	//�������������һ��ʵ��������
	tri1.setABC(4, 5, 6);	//Ϊ�����ó�ֵ
	double x, y, z;
	tri1.getABC(&x, &y, &z);   //�����ߵ�ֵΪx,y,z��ֵ
	cout << "������Ϊ��" << x << '\t' << y << '\t' << z << endl;
	cout << "�����ε��ܳ�Ϊ��" << tri1.perimeter() << '\t' << "���Ϊ��" << tri1.area() << endl;
	return 0;
}