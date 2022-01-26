#include <iostream>
#include "Queue.cpp"
#include "LinkedList.cpp"

using namespace std;

int main(){
	Queue firstQueue; // declare queue
	
	try{
		if (firstQueue.isEmpty()){
			throw firstQueue.dequeue();
		}
	}
	catch (int e){
		cout << "Call to dequeue() generated an exception("<<e<<"), because the queue is empty" << endl;
	}
	try{
		if (firstQueue.isEmpty()){
			throw firstQueue.front();
		}
	}
	catch (int e){
		cout << "Call to front() generated an exception ("<<e<<"), because the queue is empty" << endl;
	}
	
	// adding numbers to stack
	firstQueue.enqueue(1);
	firstQueue.enqueue(2);
	firstQueue.enqueue(3);
	firstQueue.enqueue(4);
	firstQueue.enqueue(5);
	firstQueue.enqueue(6);
	firstQueue.enqueue(7);
	firstQueue.enqueue(8);
	firstQueue.enqueue(9);
	firstQueue.enqueue(10);
	
	firstQueue.dequeue();
	
	// checking size of stack
	cout << "The size of the first queue is: " << firstQueue.size() << endl;

	// Check if the stacks are empty
    if(firstQueue.isEmpty())
        cout << "The first queue is empty!" << endl;
    else
        cout << "The first queue is NOT empty..." << endl;
        
    // printing content of stack
    cout << "Here is the first queue: ["; firstQueue.print(); cout << "]" << endl;
    
	
	return 0;
}
