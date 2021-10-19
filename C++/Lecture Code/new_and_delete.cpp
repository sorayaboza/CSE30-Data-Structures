#include<iostream>
#include <string>
using namespace std;

int main(){
	int count;
	cin>>count;
	
	int* a = new int[count];
	// To delete this:
	delete [] a;
	
	int count2;
	cin>>count2;
	int b[count2];
}
