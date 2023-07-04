#include<iostream>
using namespace std;

int main(){
	int array[5], max;
	
	for(int i = 0; i < 5; i++){
		cout << "Enter element number " << i+1 << " : ";
		cin >> array[i];
	}
	
	max = array[0];
	for(int i = 1; i < 5; i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	
	cout << "Maximum Number is : " << max << endl;
	
	return 0;
}
