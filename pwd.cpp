#include <iostream>
using namespace std;

int main(){
	cout << "Введите пароль - ";

	int pwd = 0;
	cin >> pwd;

	if(pwd == 1232 || pwd == 1444){
		cout << "Доступ разрешён" << endl;
	}else{
		cout << "Доступ запрещён" << endl;
	}

	return 0;
}