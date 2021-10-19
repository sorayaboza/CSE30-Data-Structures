// Organizes a given array into ascending or descending order.
#include<iostream>
#include <string>

using namespace std;

void insertionSort(int order, int arraySize, int myArray[]){
	cout << "Sort in acending (0) or descending (1) order? ";
	cin >> order;
	if (order == 0){
		int saved;
		int k;
		for (int i = 2; i <= arraySize; i++){
			saved = myArray[i];
			k = i-1;
			while (k >= 1 && myArray[k] > saved){
				myArray[k+1] = myArray[k];
				k = k - 1;
			}
			myArray[k+1] = saved;
		}
		for (int i = 1; i <= arraySize; i++){
			cout <<  myArray[i] << " ";
		}
	}
	
	if (order == 1){
		for (int i = arraySize-1; i > 0; i--){
			int saved;
			saved = myArray[i];
			int k;
			k = i+1;
			// k starts from i+1
			while (k <= arraySize && myArray[k] > saved){
				myArray[k-1] = myArray[k];
				k = k + 1; // k is moving to the right
			}
			myArray[k-1] = saved;
		}
		for (int i = 1; i <= arraySize; i++){
			cout <<  myArray[i] << " ";
		}
	}
	
}

int main(){
	int arraySize;
	int order;
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
	
	insertionSort(order, arraySize, myArray);

}
