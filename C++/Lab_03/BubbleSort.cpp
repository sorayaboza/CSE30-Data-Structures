#include<iostream>
using namespace std;

int main(){

	int arraySize;
	int temp;

	cout << "Enter the size of the array: ";
	cin >> arraySize; // Storing input into variable
	
	if (arraySize < 0){
		cout << "ERROR: You entered an incorrect value for the array size!";
		return 0;
	}
	
	int myArray[arraySize];
	
	cout << "Enter the numbers in the array, separated by a space, and press enter:"<< "\n";

	// First for loop goes from 1 to the size of my array.
	for (int i = 1; i <= arraySize; i++){
		cin >> myArray[i];

	}
	for (int i = 1; i <= arraySize; i++){
		for (int j = 1; j <= arraySize-i; j++){
			if (myArray[j] > myArray[j+1]){
				// Very common Swapping method
				temp = myArray[j];
				myArray[j] = myArray[j+1];
				myArray[j+1] = temp;
				
				// This shows all the steps of the bubble sort.
				// 'k' in this prints out our array index (arraySize) times.
				// For example, arraySize = 3
				// output:
				// 123
				// 123
				// 123
				for (int k = 1; k <= arraySize; k++){
					cout<< myArray[k]<<" ";
				}
				cout<<endl;

			}					
		}
	}

}
