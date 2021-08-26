#include <iostream>
using std::cout;
using std::endl;

int main(){
	int arr[] = {6,7,8,9,10,11,12,13,14,15};
	int dl = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;
	for(int i = 0; i < dl; i++){
		cout << "Число - " << arr[i] << endl;
		sum = sum + arr[i];
	}
	cout << "Сумма всех элементов в массиве = " << sum << endl;
	return 0;
}