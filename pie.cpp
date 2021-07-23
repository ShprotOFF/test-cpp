#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Я собираюсь позавтракать" << endl;
	cout << "Сколько мне съесть пирожков...?" << endl;

	int p = 0;
	cin >> p;

	if(p >= 10 && p <=20)
	{
		cout << "Я съел " << p << " пирожков!" << endl;
	}
	else
	{
		switch(p % 10)
		{
			case 0:
			cout << "Я съел " << p << " пирожков!" << endl;
			break;
			case 1:
			cout << "Я съел " << p << " пирожок!" << endl;
			break;
			case 2:
			case 3:
			case 4:
			cout << "Я съел " << p << " пирожка!" << endl;
			break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			cout << "Я съел " << p << " пирожков!" << endl;
		}
	}

	// switch(p)
	// {
	// 	case (p == 1):
	// 	cout << "Я съел " << p << " пирожков" << endl;
	// 	break;
	// }
}