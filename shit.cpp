#include <iostream>
using namespace std;

int main(){
	cout << "Как тебя зовут...?" << endl;

	string name;
	cin >> name;
	cout << "Вы ввели " << name << endl;

	cout << "А сколько тебе лет...?" << endl;
	int eage = 0;
	cin >> eage;

	cout << "Оказывается тебя зовут " << name << " и тебе " << eage << " лет!" << endl;
}