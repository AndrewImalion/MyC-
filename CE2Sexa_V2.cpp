//����Ԫ��ת��Ϊ��֧����
//*�������ݣ��ж��Ƿ�������
//@BaronChang,AllRightsReserved.2018

#include<iostream>
#include<string>
using namespace std;

//�жϸ����Ƿ�Ϊ����
bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	else
		return false;
};

//��֧����
string GanZhi(int num)
{
	switch (num)
	{
	case 1:return "����";break;
	case 2:return "�ҳ�";break;
	case 3:return "����";break;
	case 4:return "��î";break;
	case 5:return "�쳽";break;
	case 6:return "����";break;
	case 7:return "����";break;
	case 8:return "��δ";break;
	case 9:return "����";break;
	case 10:return "����";break;
	case 11:return "����";break;
	case 12:return "�Һ�";break;

	case 13:return "����";break;
	case 14:return "����";break;
	case 15:return "����";break;
	case 16:return "��î";break;
	case 17:return "����";break;
	case 18:return "����";break;
	case 19:return "����";break;
	case 20:return "��δ";break;
	case 21:return "����";break;
	case 22:return "����";break;
	case 23:return "����";break;
	case 24:return "����";break;

	case 25:return "����";break;
	case 26:return "����";break;
	case 27:return "����";break;
	case 28:return "��î";break;
	case 29:return "�ɳ�";break;
	case 30:return "����";break;
	case 31:return "����";break;
	case 32:return "��δ";break;
	case 33:return "����";break;
	case 34:return "����";break;
	case 35:return "����";break;
	case 36:return "����";break;

	case 37:return "����";break;
	case 38:return "����";break;
	case 39:return "����";break;
	case 40:return "��î";break;
	case 41:return "�׳�";break;
	case 42:return "����";break;
	case 43:return "����";break;
	case 44:return "��δ";break;
	case 45:return "����";break;
	case 46:return "����";break;
	case 47:return "����";break;
	case 48:return "����";break;

	case 49:return "����";break;
	case 50:return "���";break;
	case 51:return "����";break;
	case 52:return "��î";break;
	case 53:return "����";break;
	case 54:return "����";break;
	case 55:return "����";break;
	case 56:return "��δ";break;
	case 57:return "����";break;
	case 58:return "����";break;
	case 59:return "����";break;
	case 60:return "�ﺥ";break;

	default:return "Error";break;
		break;
	}
}

//ȷ����֧��
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
			cout << year << "�� �����ꡣ" << endl;
		else
			cout << year << "�� ��ƽ�ꡣ" << endl;

		cout << "������ɵ�֧Ϊ" << DeGZH(year)	<< endl;

		system("pause");
	}
	return 0;
}