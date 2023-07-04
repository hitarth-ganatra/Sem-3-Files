#include<iostream>
using namespace std;

int main(){
	int array[5], max, min;
	
	for(int i = 0; i < 5; i++){
		cout << "Enter element number " << i+1 << " : ";
		cin >> array[i];
	}
	
	max = array[0];
	min = array[0];
	
	for(int i = 1; i < 5; i++){
		if(array[i] > max){
			max = array[i];
		}
		
		if(array[i] < min){
			min = array[i];
		}
	}
	
	cout << "Maximum Number is : " << max << endl;
	cout << "Minimum Number is : " << min << endl;
	cout << "The difference is : " << max - min << endl;
	
	return 0;
}
