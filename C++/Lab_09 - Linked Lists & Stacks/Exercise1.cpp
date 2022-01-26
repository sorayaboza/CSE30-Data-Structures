#include <iostream>
#include "Stack.cpp"
#include "LinkedList.cpp"

using namespace std;

int main(){
	Stack firstStack; // declare stack
	
	// adding numbers to stack
	firstStack.push(1);
	firstStack.push(2);
	firstStack.push(3);
	firstStack.push(4);
	firstStack.push(5);
	firstStack.push(6);
	firstStack.push(7);
	firstStack.push(8);
	firstStack.push(9);
	firstStack.push(10);
	
	// returning to top of stack
	firstStack.top();
	
	// checking size of stack
	cout << "The size of the first stack is: " << firstStack.size() << endl;
	
	// Check if the stacks are empty
    if(firstStack.isEmpty())
        cout << "The first stack is empty!" << endl;
    else
        cout << "The first stack is NOT empty..." << endl;
        
    // printing content of stack
     cout << "Here is the first stack: ["; firstStack.print(); cout << "]" << endl;
	
	
}
