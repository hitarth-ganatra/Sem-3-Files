#include<iostream>
using namespace std;

int main(){
	int array[5], count = 0, num;
	
	for(int i = 0; i < 5; i++){
		cout << "Enter element number " << i + 1 << " : ";
		cin >> array[i];
	}
	
	cout << endl << "Enter the number to check : ";
	cin >> num;
	
	for(int i = 0; i < 5; i++){
		if(array[i] == num){
			cout << "Element is present on " << i + 1 << endl;
			count++;
		}
	}
	
	if(count == 0)
		cout << "Element is not present" << endl;
	else
		cout << "Element is present " << count << " times"<< endl;
	
	return 0;
}
