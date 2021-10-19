#include<iostream>
#include <string>

using namespace std;

void sortArr(int order, int arraySize, int myArray[], int temp){
	cout << "Sort in acending (0) or descending (1) order? ";
	cin >> order;
	
	if (order == 0){
		cout << "This is the sorted array in ascending order: "<< "\n";
		for (int i = 1; i <= arraySize; i++){
			for (int j = 1; j <= arraySize-i; j++){
				if (myArray[j] > myArray[j+1]){
					// Swapping
					temp = myArray[j];
					myArray[j] = myArray[j+1];
					myArray[j+1] = temp;
				}					
			}
		}
		for (int i = 1; i <= arraySize; i++){
			cout <<  myArray[i] << " ";
		}
	}
	if (order == 1){
		cout << "This is the sorted array in descending order: "<<"\n";
		for (int i = 1; i <= arraySize; i++){
			int min;
			int index_min;
			min = -9999; // Setting max to a very small number
			// From 1 to our array size
			for (int j = i; j <= arraySize; j++){ // 
				// If -9999 is less than the first index in myArray,
				if(min < myArray[j]){
					min = myArray[j]; // swap them.
					index_min = j;
				}				
			}
			// swapping 
			if (index_min != i){
				temp = myArray[index_min];
				myArray[index_min] = myArray[i];
				myArray[i] = temp;	
			}
	
		}
		for (int i = 1; i <= arraySize; i++){
			cout <<  myArray[i] << " ";
		}
	}
	return;
}


int main(){
	int order;
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
	
	sortArr(order,arraySize,myArray,temp);
}
