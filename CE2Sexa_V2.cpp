//½«¹«ÔªÄê×ª»¯Îª¸ÉÖ§¼ÍÄê
//*¶îÍâÄÚÈİ£ºÅĞ¶ÏÊÇ·ñÊÇÈòÄê
//@BaronChang,AllRightsReserved.2018

#include<iostream>
#include<string>
using namespace std;

//ÅĞ¶Ï¸ÃÄêÊÇ·ñÎªÈòÄê
bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	else
		return false;
};

//¸ÉÖ§ĞòÊı
string GanZhi(int num)
{
	switch (num)
	{
	case 1:return "¼××Ó";break;
	case 2:return "ÒÒ³ó";break;
	case 3:return "±ûÒú";break;
	case 4:return "¶¡Ã®";break;
	case 5:return "Îì³½";break;
	case 6:return "¼ºËÈ";break;
	case 7:return "¸ıÎç";break;
	case 8:return "ĞÁÎ´";break;
	case 9:return "ÈÉÉê";break;
	case 10:return "¹ïÓÏ";break;
	case 11:return "¼×Ğç";break;
	case 12:return "ÒÒº¥";break;

	case 13:return "±û×Ó";break;
	case 14:return "¶¡³ó";break;
	case 15:return "ÎìÒú";break;
	case 16:return "¼ºÃ®";break;
	case 17:return "¸ı³½";break;
	case 18:return "ĞÁËÈ";break;
	case 19:return "ÈÉÎç";break;
	case 20:return "¹ïÎ´";break;
	case 21:return "¼×Éê";break;
	case 22:return "ÒÒÓÏ";break;
	case 23:return "±ûĞç";break;
	case 24:return "¶¡º¥";break;

	case 25:return "Îì×Ó";break;
	case 26:return "¼º³ó";break;
	case 27:return "¸ıÒú";break;
	case 28:return "ĞÁÃ®";break;
	case 29:return "ÈÉ³½";break;
	case 30:return "¹ïËÈ";break;
	case 31:return "¼×Îç";break;
	case 32:return "ÒÒÎ´";break;
	case 33:return "±ûÉê";break;
	case 34:return "¶¡ÓÏ";break;
	case 35:return "ÎìĞç";break;
	case 36:return "¼ºº¥";break;

	case 37:return "¸ı×Ó";break;
	case 38:return "ĞÁ³ó";break;
	case 39:return "ÈÉÒú";break;
	case 40:return "¹ïÃ®";break;
	case 41:return "¼×³½";break;
	case 42:return "ÒÒËÈ";break;
	case 43:return "±ûÎç";break;
	case 44:return "¶¡Î´";break;
	case 45:return "ÎìÉê";break;
	case 46:return "¼ºÓÏ";break;
	case 47:return "¸ıĞç";break;
	case 48:return "ĞÁº¥";break;

	case 49:return "ÈÉ×Ó";break;
	case 50:return "¹ï³ó";break;
	case 51:return "¼×Òú";break;
	case 52:return "ÒÒÃ®";break;
	case 53:return "±û³½";break;
	case 54:return "¶¡ËÈ";break;
	case 55:return "ÎìÎç";break;
	case 56:return "¼ºÎ´";break;
	case 57:return "¸ıÉê";break;
	case 58:return "ĞÁÓÏ";break;
	case 59:return "ÈÉĞç";break;
	case 60:return "¹ïº¥";break;

	default:return "Error";break;
		break;
	}
}

//È·¶¨¸ÉÖ§Äê
string DeGZH(int year)
{
	int a;
	a = (year % 60) < 3 ? (year % 60 + 57) : (year % 60 - 3);
	return GanZhi(a);
};

int main()
{
	while (true)
	{
		int year;
		cout << "input a year please." << endl;
		cin >> year;

		if (IsLeapYear(year) == true)
			cout << year << "Äê ÊÇÈòÄê¡£" << endl;
		else
			cout << year << "Äê ÊÇÆ½Äê¡£" << endl;

		cout << "¸ÃÄêÌì¸ÉµØÖ§Îª" << DeGZH(year)	<< endl;

		system("pause");
	}
	return 0;
}