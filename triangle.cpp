#include"triangle.h"
#include<cmath>
void Triangle::setABC(double x, double y,double z)
{
	if (x + y <= z || x + z <= y || y + z <= x)
	{
		cout << "不构成三角形";
	}
	a = x;
	b = y;
	c = z;
}
void Triangle::getABC(double* x,double* y,double* z)
{
	(*x)=a;
	(*y) = b;
	(*z) = c;

}
double Triangle::perimeter()
{
	return (a + b + c);
}
double Triangle::area(void)
{
	double p;
	p = (a + b + c) / 2;
	return(sqrt(p * (p - a) * (p - b) * (p - c)));
}