#include <iostream>
using namespace std;

int main()
{
	cout << "Введите число пидарасов - ";

	int p = 0;
	cin >> p;

	for(int i = p; i >= 0; i--)
	{
		cout << "Отсрелили " << i << " пидарасов" << endl;
	}
	cout << "Отсрел пидарасов закончен...=)" << endl;
}