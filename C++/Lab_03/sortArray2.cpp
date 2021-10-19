#include<iostream>
#include <string>

using namespace std;

int main(){

	int arraySize;
	int temp;
	int count = 0;
		
	cout << "Enter the size of the array: ";
	cin >> arraySize; // Storing input into variable
	
	if (arraySize < 0){
		cout << "ERROR: You entered an incorrect value for the array size!";
		return 0;
	}
	 
	int myArray[arraySize];
	
	cout << "Enter the numbers in the array, separated by a space, and press enter:"<< "\n";

	// Inputting numbers into my array
	for (int i = 1; i <= arraySize; i++){
		cin >> myArray[i];
	}
	// From 1 to the size of the array
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
			count++;
		}
		// Prints out the full steps of the array.
		for (int k = 1; k <= arraySize; k++){
			cout <<  myArray[k] << " ";
		}
		cout<<endl;

	}
	for (int i = 1; i <= arraySize; i++){
		cout <<  myArray[i] << " ";
	}
	cout << "\n";
	cout << "The algorithm selected the minimum for the traverse of the array.";
	cout << "\n";
	cout << "It took "<< count << " swaps to sort the array...";
}
