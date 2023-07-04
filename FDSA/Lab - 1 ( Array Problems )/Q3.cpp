#include<iostream>
using namespace std;

int main(){
	int array[5], count = 0;
	
	for(int i = 0; i < 5; i++){
		cout << "Enter element number " << i+1 << " : ";
		cin >> array[i];
	}
	
	cout << endl << "Odd numbers in the array are : ";
	for(int i = 0; i < 5; i++)
	{
		if(array[i] % 2 == 1)
		{
			cout << array[i] << " " ;
			count++;
		}
	}
	cout << endl << "Total odd numbers in array are : " << count << endl;
	
	return 0;
}
