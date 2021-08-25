#include <iostream>
using namespace std;

int main(){

	int arr[] = {51,52,53,54,55,56,57,58};
	int length = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i < length; i++)
		cout << "Элемент в массиве - " << arr[i] << endl;
	return 0;
}