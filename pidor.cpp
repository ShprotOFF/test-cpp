#include <iostream>
using namespace std;

int main()
{
	cout << "Введите число пидарасов - ";

	int p = 0;
	cin >> p;

	string ots = "Отстрелили ";

	if(p >= 10)
	{
		cout << "Не брат. Их слишком много. Они тебя выебут...!" << endl;
	}
	else if(p == 1)
	{
		cout << ots << "одного пидараса!" << endl;
	}
	else
	{
		cout << ots << p << "-х пидарасов!" << endl;
	}
}