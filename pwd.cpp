#include <iostream>
#include <string>
using namespace std;

int main(){

	// Данные пользователей
	// Первый пользователь
	string user1 = "Маша";
	int pwd1 = 1111;

	// Воторой пользователь
	string user2 = "Даша";
	int pwd2 = 2222;

	// Тертий пользователь
	string user3 = "Паша";
	int pwd3 = 3333;

	string userName;
	cout << "Введите имя пользователя - ";
	cin >> userName;

	int pwd = 0;
	cout << "Введите пароль - ";
	cin >> pwd;

	if(userName == user1 && pwd == pwd1){
		cout << "Добрый день " << user1 << "! Доступ разрешён" << endl;
	}else if(userName == user2 && pwd == pwd2){
		cout << "Добрый день " << user2 << "! Доступ разрешён"<< endl;
	}else if(userName == user3 && pwd == pwd3){
		cout << "Добрый день " << user3 << "! Доступ разрешён"<< endl;
	}else{
		cout << "Доступ запрещён!" << endl;
	}

	return 0;
}