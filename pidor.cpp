#include <iostream>
using namespace std;

int main()
{
	cout << "Введите число пидарасов - ";

	int p = 0;
	cin >> p;

	if(p >= 10)
		cout << "Не брат, их много. Они тебя выебут" << endl;
	else
	{
		{
			for(int i = p; i >= 0; i--)
			cout << "Отсрелили " << i << " пидарасов" << endl;
		}
		cout << "Отсрел пидарасов закончен...=)" << endl;
	}
}