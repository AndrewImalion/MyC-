//�������������
//@BaronChang,All Rights Reserved

#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

//Heron'formula
double	Heron(double  a, double  b, double  c)
{
	double	p;
	p = (a + b + c) / 2;
	return sqrt(p*(p - a)*(p - b)*(p - c));
};

//Triangle class
class Triangle
{
	public:
		bool	isLegal(void);
		double	getArea(void);
		void	setSide0(double);
		void	setSide1(double);
		void	setSide2(double);

	private:
		double  side0, side1, side2;

};

//implement of isLegal
bool Triangle::isLegal(void)
{
	return(side0 + side1 > side2 &&
		side0 + side2 > side1 &&
		side2 + side1 > side0) &&
		(abs(side0 - side1) < side2 &&
		abs(side0 - side2) < side1 &&
		abs(side1 - side2) < side0);
};

//implement of getArea
double Triangle::getArea(void)
{
	if (isLegal())
	{
		cout << "�߳�Ϊ"<<side0<<","<<side1<<","<<side2<<"�������ε������" << Heron(side0, side1, side2) << endl;
		return  Heron(side0, side1, side2);
	}
	else
	{
		cout << side0 << "," << side1 << "," << side2 << "  �޷����������Σ�" << endl;
		return -1;
	}
}

//set side
void Triangle::setSide0(double side)
{
	side0 = side;
};
void Triangle::setSide1(double side)
{
	side1 = side;
};
void Triangle::setSide2(double side)
{
	side2 = side;
};

int _tmain()
{
	Triangle trianglo1;
	Triangle trianglo2;

	trianglo1.setSide0(3);
	trianglo1.setSide1(4);
	trianglo1.setSide2(5);

	trianglo2.setSide0(1);
	trianglo2.setSide1(2);
	trianglo2.setSide2(3);

	trianglo1.getArea();
	trianglo2.getArea();

	system("pause");
	return 0;
};

//TODO:�ܹ����û�ͨ��cin����������