#ifndef _QUEUE_H
#define _QUEUE_H
#include "LinkedList.h"


using namespace std;

class Queue : public LinkedList{ // We're inheriting from LnkedList
	public:
		Queue(); // Default Constructor
		~Queue(); // Destructor
		void enqueue(int value); // inserts a new element (value) at front of stack, by calling the appropriate LinkedList function
		int dequeue(); // removes the first element of the Stack, by calling the appropriate LinkedList function. It also returns the value of the element that has been popped.
		int& front(); // returns a reference to the top element of the Stack.
};

#endif
