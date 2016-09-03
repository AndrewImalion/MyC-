//使用while计算阶乘
//BaronChang，AllRightsReserved
#include"stdafx.h"
#include<iostream>
using namespace std;

int main(){
	cout << "阶乘计算" << endl;
	kaitou:long sum =1;
	int j = 1;
	long i;
	cout << "input a number pls."<<endl;
	cin >> i;
	while(j<=i)
	{
		sum = sum*j;
		j++;
	};
	cout << i << "!=" <<sum<< endl;
	goto kaitou;
	system("pause");
	return 0;
}
