#include <iostream>
#include "Queue_char.cpp"
#include "LinkedList_char.cpp"

using namespace std;

int main(){
	Queue firstQueue; // declare queue
	
	firstQueue.first = NULL; // calling attribute of a class using '.'
	firstQueue.last = NULL;
	
	try{
		if (firstQueue.isEmpty()){
			throw firstQueue.dequeue();
		}
		cout << "**************************8"<< endl;
	}
	catch (char e){
		cout << "Call to dequeue() generated an exception("<<e<<"), because the queue is empty" << endl;
	}
	try{
		if (firstQueue.isEmpty()){
			throw firstQueue.front();
		}
	}
	catch (char e){
		cout << "Call to front() generated an exception ("<<e<<"), because the queue is empty" << endl;
	}
	
	// adding numbers to stack
	firstQueue.enqueue('D');
	firstQueue.enqueue('A');
	
	cout << firstQueue.dequeue() << endl;;
	
	// checking size of stack
	cout << "The size of the first queue is: " << firstQueue.size() << endl;
	
	firstQueue.enqueue('D');
	
	// Check if the stacks are empty
    if(firstQueue.isEmpty())
        cout << "true" << endl;
    else
        cout << "false" << endl;
        
    cout << firstQueue.front() << endl;
    firstQueue.enqueue('T');
    cout << firstQueue.front() << endl;
	
	return 0;
}
