#include<iostream>
#include <string>

using namespace std;

int equal(int &a, int b){
	a = b;
	return a; //  You need to include &, otherwise you're returning a, but you didn't modify it.
}

int main(void){
	int x = 10;
	int y = 20;
	equal(x,y);
	cout << x << "\n"; // This will print 20.
	cout << "\n";
	
	int a = 12;
	int &b = a;
	a = 14;
	cout << b << "\n"; // Prints 14.
	
	int *d = &a;
	a = 14;
	cout << d << "\n"; // Will print out the address of b.
	cout << *d << "\n"; // Will print the value of b, which is 14.
	
	int c[3] = {4,5,6};
	
	cout << c << "\n"; // Will print an address of the first integer in the array.
	cout << *c << "\n"; // Will print out first value in array, 4.
	cout << *(c+1) << "\n"; // Prints out second value in array, 5.
	
	cout << "\n";

	cout << *(c+3) << "\n"; // Going out of bounds gives you a random value.
}
