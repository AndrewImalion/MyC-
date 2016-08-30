//数据大小显示
//@BaronChang,铮琪大人，allrightresevered

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "This program can tell you the sizes of different types of datas in your computer.";//UI information
	system("pause");
	const	char	theChr = 1;
	const	short theSht = 1;		//
	const	int theInt = 1;			//declare const
	const	long theLng = 1;		//**********

	cout 	 << "the size of char:    " << sizeof(theChr) << "\n"
		 << "the size of short:   " << sizeof(theSht) << "\n"
		 << "the size of int:     " << sizeof(theInt) << "\n"
		 << "the size of long:    " << sizeof(theLng) << "\n";
	system("pause");
	return 0;
}

