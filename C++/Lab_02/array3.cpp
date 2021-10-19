// Checking the amount of negative values in a 2D/Square Array

#include<iostream>
using namespace std;

int main(){
	
	int arraySize;
	int count = 0;
	
	cout << "Enter the size of a 2D array: ";
	cin >> arraySize;
	
	// This is our matrix, which lists the [row][column].
	int numbers[arraySize][arraySize];
	
	// Making sure input is valid (integer and from 1 to 10)
	if (arraySize <= 0 || arraySize > 10){
		cout << "ERROR: You entered an incorrect value for the array size!";
		return 0;
	}
	
	// Looping from 1 to size of array
	for (int i = 1; i <= arraySize; i++){
		cout << "Enter the values in the array for row " << i <<", separated by a space, and press enter:"<< "\n";
		
		// Above we have the size of the matrix, and below we're inputting the numbers into the matrix.
		for (int j = 1; j <= arraySize; j++){
			// i is our rows, and j is our columns.
			// We loop through each set as the user inputs their values.
			// Example: In the first round of loops, we have i:1, j:1 or row:1, column: 1
			// Here we input the user's first value, for example '3'
			// Next, we have i:1, j:2, where the user can input '2'
			// So our array on the first row would look like '3 2'.
			
			cin >> numbers[i][j];
			// If any number in the matrix is less than 0,
			if (numbers[i][j] < 0){
				// add 1 to this count.s
				count++;
			}
		}
	}
	if (count == 0){
		cout << "All values are non-negative!";
		return 0;
	}
	cout << "There are " << count << " negative numbers!";
}
