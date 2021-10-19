// Check if it's an increasing array

#include<iostream>
using namespace std;

int main(){
	
	// Declaring variables
	int arraySize;
	int increasing = 0;

	
	// Asking for user input
	cout << "Enter the size of the array: ";
	cin >> arraySize; // Storing input into variable
	
	// Creating my array
	int numbers[arraySize];
	
	// Making sure input is valid (integer and above 0)
	if (!cin || arraySize < 0){
		cout << "ERROR: You entered an incorrect value for the array size!";
		return 0;
	}
	
	cout << "Enter the numbers in the array, separated by a space, and press enter:"<< "\n";
	
	// Looping from 0 to size of array
	// Inserting given values into the array "numbers"
	for (int i = 0; i < arraySize; i++){
		cin >> numbers[i];
		if (numbers[i]-numbers[i-1]==numbers[i-2]){
			increasing = 1;
		}

	}
	
	if (increasing == 1){
		cout << "This IS an increasing array!"<< "\n";
	}
	else{
		cout <<"This is NOT an increasing array!"<<"\n";
	}
	
	// Printing the final array by looping through it
	for (int k = 0; k < arraySize; k++){
		cout << numbers[k]<<" ";
	}
	
	return 0;
	}
