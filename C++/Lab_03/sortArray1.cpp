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
	cout << "This is the sorted array in ascending order: "<< "\n";
	for (int i = 1; i <= arraySize; i++){
		for (int j = 1; j <= arraySize-i; j++){
			if (myArray[j] > myArray[j+1]){
				// Swapping
				temp = myArray[j];
				myArray[j] = myArray[j+1];
				myArray[j+1] = temp;
				
				// Prints the sorting array.
				for (int k = 1; k <= arraySize; k++)
					cout<< myArray[k]<<" ";
				cout<<endl;
//				cout << "j: "<< j << " and j + 1: "<< j+1<< endl;
//				cout << "Left: "<< myArray[j] << "\n";
			}					
		}
	}
	cout << "The algorithm selected the maximum for the traverse of the array.";

}
