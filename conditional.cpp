#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Введите число - ";
	int x = 0;
	cin >> x;

	if(x > 0)
	{
		cout << x << " - число положительное" << endl;
	}
	else if(x == 0)
	{
		cout << x << " это ноль. Хули тут говорить...?" << endl;
	}
	else
	{
		cout << x << " число отрицательное" << endl;
	}
	
	return 0;
}