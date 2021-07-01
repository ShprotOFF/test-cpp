#include <iostream>
using namespace std;

int main(){
	cout << "Введите Ваш год рождения - ";

	int birthday = 0;
	cin >> birthday;

	int result = 0;
	result = 2021 - birthday;

	if(result < 18){
		cout << "Так ты сопяляк ещё. Тебе всего " << result << " лет" << endl;
	} else if (result == 18){
		cout << "Тебе уже " << result << ". В этом году ты пиздуешь в армию." << endl;
	} else if (result == 40){
		cout << "Ну всё, ты уже взрослый! Тебе " << result << endl;
	} else {
		cout << "Пиздец, ты уже старый. " << result << " лет. Этим всё сказано" << endl;
	}

	return 0;
}