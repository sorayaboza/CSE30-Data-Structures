#include<iostream>
#include <string>

using namespace std;

int main(void){
	int c[3] = {4,89,26};
	int *p = c;
	cout << *(p+1)<< "\n"; // Prints 89.
	
	// int &p = c will not work, because p needs to be given an address.
	&p = c[0];
}
