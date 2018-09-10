//Gerg2Sexa。
//将格里高利历转化为干支纪年
//公元3年前不适用
//@BaronChang,AllRightsReserved.2018
//TODO:fix BC isue

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	else
		return false;
};
string FindTianGan(int year)
{
	int Num;
	Num = (year % 10 - 3) < 0 ? (year % 10 + 7) : (year % 10 - 3);
	switch (Num)
	{
	case 1:return "甲";break;
	case 2:return "乙";break;
	case 3:return "丙";break;
	case 4:return "丁";break;
	case 5:return "戊";break;
	case 6:return "己";break;
	case 7:return "庚";break;
	case 8:return "辛";break;
	case 9:return "壬";break;
	case 10:return "癸";break;
	default:
		break;
	}
}
string FindDiZhi(int year)
{
	int Num;
	Num = (year - 3) % 12;
	switch (Num)
	{
	case 0:return"亥";break;
	case 1:return"子";break;
	case 2:return"丑";break;
	case 3:return"寅";break;
	case 4:return"卯";break;
	case 5:return"辰";break;
	case 6:return"巳";break;
	case 7:return"午";break;
	case 8:return"未";break;
	case 9:return"申";break;
	case 10:return"酉";break;
	case 11:return"戌";break;
	default:
		break;
	}
};

int main()
{
	while (true)
	{
		int year;
		cout << "input a year please." << endl;
		cin >> year;
		
		if (IsLeapYear(year) == true)
			cout << year << "年 是闰年。" << endl;
		else
			cout << year << "年 是平年。" << endl;

		cout << "该年天干地支为" << FindTianGan(year) <<FindDiZhi(year)<< endl;

		system("pause");
	}
    return 0;
}
