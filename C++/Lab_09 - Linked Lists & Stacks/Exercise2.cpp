#include <iostream>
#include "Stack_char.cpp"
#include "LinkedList_char.cpp"

using namespace std;

int main(){
	Stack firstStack; // declare stack
	// Check if the stacks are empty
    if(firstStack.isEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
      
	
	// adding chars to stack
	firstStack.push('A');
	firstStack.push('Y');

	cout << firstStack.size() << endl;
	cout << firstStack.pop() << endl;
	
    if(firstStack.isEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
        
    firstStack.push('D');
    
    cout << firstStack.top() << endl;
    
    firstStack.push('T');
    cout << firstStack.pop() << endl;
    
    
    
    // printing content of stack
     cout << "Here is the first stack: ["; firstStack.print(); cout << "]" << endl;
	
	
}
