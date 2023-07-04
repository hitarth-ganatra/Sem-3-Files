#include<iostream>
using namespace std;

int main(){
	int arr1[5];
	int arr2[5];
	int union_arr[10];
	
	for(int i = 0; i < 5; i++){
		cout << "Enter element number " << i + 1 << " : ";
		cin >> arr1[i];
	}
	cout << endl;
	for(int i = 0; i < 5; i++){
		cout << "Enter element number " << i + 1 << " : ";
		cin >> arr2[i];
	}
	
	// Unioning
	
	for(int i = 0; i < 5; i++){
		union_arr[i] = arr1[i];
	}
	
	for(int i = 5; i < 10; i++){
		union_arr[i] = arr2[i-5];
	}
	
	// Printing Array
	
	cout << "Union Array is : ";
	for(int i = 0; i < 10; i++){
		cout << union_arr[i] << " ";
	}
}
