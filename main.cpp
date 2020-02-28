#include<iostream>
#include<Cmath>
#include"triangle.h"
using namespace std;
int main()
{
	Triangle tri1;	//定义三角形类的一个实例（对象）
	tri1.setABC(4, 5, 6);	//为三边置初值
	double x, y, z;
	tri1.getABC(&x, &y, &z);   //将三边的值为x,y,z赋值
	cout << "三条边为：" << x << '\t' << y << '\t' << z << endl;
	cout << "三角形的周长为：" << tri1.perimeter() << '\t' << "面积为：" << tri1.area() << endl;
	return 0;
}