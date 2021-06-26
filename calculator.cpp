#include <iostream>
using namespace std;

int main(){
	int firstNumber = 0, secondNumber;
	
	cout << "Введите первое число " << endl;
	cin >> firstNumber;

	cout << "Введите второе число " << endl;
	cin >> secondNumber;

	cout << "Сумма этих чисел равно = " << firstNumber + secondNumber << endl;
	cout << "Умножение этих чисел равно = " << firstNumber * secondNumber << endl;
	cout << "Разность этих чисел равно = " << firstNumber - secondNumber << endl;
	cout << "Деление равно " << firstNumber / secondNumber << endl;
	cout << "Всё просто...!" << endl;
}