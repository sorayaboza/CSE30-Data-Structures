// Counting the number of a given value in a given array.
#include<iostream>
using namespace std;

int main(){
	int arraySize;
	int count = 0;
	int numToFind;

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
	
	cout << "Enter a number to search for in the array: " << "\n";
	cin >> numToFind;
	
	for (int i = 1; i <= arraySize; i++){
		// If any value in my array is equal to the wanted number,
		if (myArray[i] == numToFind){
			// Then my count is equal to the index that number is in my array.
			count = i;
			cout << "Found value " << numToFind << " at index " << i-1 << " which took "<< count << " checks." << "\n";
		}
	}
	// Best or worst case scenario
	if (count-1 == 0){
		cout << "We ran into the best case scenario! :)";
		}

	if (count == arraySize){
		cout << "We ran into the worst case scenario! :,(";
		}
}
// 	for (int j = 1; j <= arraySize; j++){
//		count++;
//	}
