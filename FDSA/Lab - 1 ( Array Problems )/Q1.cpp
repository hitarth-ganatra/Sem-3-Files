#include<iostream>
using namespace std;

int main(){
	int array[5];
	
	for(int i = 0; i < 5; i++){
		cout << "Enter element number " << i+1 << " : ";
		cin >> array[i];
	}
	
	cout << endl << "The array is : ";
	
	for(int i = 0; i < 5; i++){
		cout << array[i] << " ";
	}
	
	return 0;
}
