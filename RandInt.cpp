//output a random int
//GreatBaron

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
int randbtw(int bot, int top)
{
	srand((int)time(0));
	if (bot < top)
		return bot + rand() % (top - bot + 1);
	else
		throw runtime_error("error: bad rand");
};

void main()
{
	while (true)
	{
		cout << "a random in [1,6]" << randbtw(1, 6) << endl;
		cout << "a random in [1,6]" << randbtw(1, 6) << endl;
		cout << "a random in [1,6]" << randbtw(1, 6) << endl;
		cout << "a random in [10,100]" << randbtw(10, 100) << endl;
		cout << "a random in [10,100]" << randbtw(10, 100) << endl;
		cout << "a random in [10,100]" << randbtw(10, 100) << endl;
		cout << "a random in [100,1000]" << randbtw(100, 1000) << endl;
		cout << "a random in [100,1000]" << randbtw(100, 1000) << endl;
		cout << "a random in [100,1000]" << randbtw(100, 1000) << endl;
		system("pause");
	};
};