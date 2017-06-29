/*================================================================
*EatWot main source code
*
*@GreatBaron,
*All Rights Reserved
*
*
*================================================================*/

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"Food.h"

using namespace std;

//=================================================================
//random int 
int randbtw(const int &min , const int &max)
{
	if (max==0)
	{
		cout << "error,bad max" << max << endl;
	}
	return (min + rand() % (max-min+1));
};
//=================================================================
//Food implementation
Food::Food(string name="unamed",int lowest=0,int highest=0,int location=1)
{
	foodName = name;
	Food::foodLocation = location;
	Food::lowestPrice = lowest;
	Food::highestPrice = highest;
};
void Food::showFoodPrice()
{
	cout << this->getFoodName()<< "的价格是" << this->lowestPrice << "--" 
		<< this->highestPrice
		<< endl;
};
int Food::getFoodLocation()
{
	return foodLocation;
};
string Food::getFoodName()
{
	return foodName;
};

//=================================================================
ifstream fooList;
//string to Food class
Food strToFood(string str,int loc)
{
	string name;
	int lowest;
	int highest;

	name = str.substr(3);
	lowest = atoi(&str[0]);
	highest = atoi(&str[2]);

	Food result(name, lowest, highest, loc);
	return result;
};

//LookFood=========================================================
Food lookFood(int loc)
{
	int lines=0;
	int foodlocation;
	string linestr;
	string foodstr = "";
	
	switch (loc)
	{
	case 0:lookFood(randbtw(1, 3));
		break;
	case 1:
	{
		fooList.open("E:\\food1", ios::in);
		getline(fooList, linestr);
		lines = atoi(linestr.c_str());
		foodlocation = 1;
	};
		break;
	case 2:
	{
		fooList.open("E:\\food2", ios::in);
		getline(fooList, linestr);
		lines = atoi(linestr.c_str());
		foodlocation = 2;
	};
		break;
	case 3:
	{
		fooList.open("E:\\food3", ios::in);
		getline(fooList, linestr);
		lines = atoi(linestr.c_str());
		foodlocation = 3;
	};
		break;
	default:
	{
		cout << "无法识别的命令，随便吃点吧" << endl;
		lookFood(0);
	};
		break;
	};

	int temp;
	int flag = 0;
	temp = randbtw(1, lines);

	while (flag<temp)
	{
		getline(fooList, foodstr);
		flag++;
	};

	return strToFood(foodstr,foodlocation);
}
int main()
{
	do
	{
		system("cls");
		int compass;
		cout << "请输入楼层数" << endl;
		cin >> compass;
		cout << "吃 " << lookFood(compass).getFoodName() << endl;
		system("pause");
	} while (true);
	
	return 0;
};