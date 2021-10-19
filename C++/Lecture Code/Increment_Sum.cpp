#include<iostream>
#include <string>

using namespace std;

int main () {
	int arraySize = 7;
	int myArray[arraySize] = {3,5,7,4,9,1,2};

	int sum ;
	for (int i = 2; i <= (arraySize - 1); i+= 2){
		sum = sum + myArray[i];
		cout << myArray[i] << "\n";
	}
	cout << sum << "\n";
}
