#include<iostream>
using namespace std;

int main(){
	int array[5], sum = 0;
	
	for(int i = 0; i < 5; i++){
		cout << "Enter element number " << i+1 << " : ";
		cin >> array[i];
	}
	
	for(int i = 0; i < 5; i++){
		sum += array[i];
	}
	
	cout << endl << "The sum of elements in the array is : " << sum << endl;
	cout << "The average of elements in the array is : " << sum/5.0 << endl;
	
	return 0;
}
