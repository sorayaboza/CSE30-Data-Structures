#include<iostream>
#include <string>

using namespace std;
int main(){
	int firstvalue, secondvalue;
	int * mypointer;
	cout << mypointer << "\n"; // Prints mypointer address.
	mypointer = &firstvalue;
	cout<< mypointer << "\n";// The address of firstvalue equals to mypointer. So now mypointer has a new address.
	*mypointer = 10;
	mypointer = &secondvalue;// mypointer is pointing to address of secondvalue.
	*mypointer = 20;
	cout << "firstvalue is "<< firstvalue << endl;// Prints 10.
	cout << "secondvalue is "<< secondvalue << endl;// Prints 20.
	return 0;
}
