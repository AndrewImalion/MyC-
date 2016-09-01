// 宏测试
//BaronChang，AllRightsReserved,

#include "stdafx.h"
#include <iostream>
using namespace std;
#define PI 3.14159

int main(int argc, char* argv[])
{
	double square = 0, volume = 0, radius = 0;
	cout << "Please input the radius." << endl;
	cin >> radius;
	square = PI*radius*radius;
	cout << "半径长度为" << radius << "的圆的面积是：" << square << endl;
	volume = 4 * PI*radius*radius*radius / 3;
	cout << "半径长度为" << radius << "的球的体积是：" << volume << endl;
	cout << "BaronChang\n";
	system("pause");
	return 0;
}
