//BookRecord
//BaronChang

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int _tmain()
{
	ifstream inFile;
	string fileName;
	string inputStr;
	cout << "Hello!Welcome for using this program.\n@BaronChang\n";
	inFile.open("bookinhand.rcd");
	//============================================
	string book_inhand;
	string book_rec;
	getline(inFile, book_inhand);
	if (book_inhand == "0")
	{
		cout << "you had borrown no book now,\n";
	}
	else
	{
		for (size_t i = 0; i < 8; i++)
		{
			getline(inFile, book_rec);
			cout << "No. " << i + 1 << book_rec << "\n";
		}
	}
	//==================================================
	system("pause");
	return 0;
}


