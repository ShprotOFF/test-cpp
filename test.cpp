#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	cout << "Привет...!" << endl;
	cin.get();
	cout << "Тебя как звать-то...?" << endl;

	string yourName;
	cin >> yourName;

	cout << "А лет тебе сколько...?" << endl;
	
	int eath;
	cin >> eath;

	string text, text1, text2;
	text = "О-о-о...! Ебать мой хуй! Так тебя звать ";
	text1 = " и тебе ";
	text2 = text + yourName + text1;

	cout << text2 << eath << " лет...=)" << endl;

	return 0;
}