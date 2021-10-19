#include <iostream>
#include <string>

using namespace std;

int main(){
	// Everything that stores something has an address.
	
	int arr[3] = {4, 3, 2};
	
	cout << arr << endl; // Address of array
	cout << *arr << endl; // Gives first element in array, index 0
	cout << *(arr + 1) << endl; // Gives 2nd element in array
	
	int b = 5;
	
	// This is how you make a new pointer.
	int* a = &b;
	int &c = b;
	
	cout << a << endl;
	cout << c << endl;
}
