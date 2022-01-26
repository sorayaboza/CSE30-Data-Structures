#ifndef _QUEUE_H
#define _QUEUE_H
#include "LinkedList_char.h"


using namespace std;

class Queue : public LinkedList{ // We're inheriting from LinkedList
	public:
		Queue(); // Default Constructor
		~Queue(); // Destructor
		void enqueue(char value); // inserts a new element (value) at front of stack, by calling the appropriate LinkedList function
		char dequeue(); // removes the first element of the Stack, by calling the appropriate LinkedList function. It also returns the value of the element that has been popped.
		char& front(); // returns a reference to the top element of the Stack.
};

#endif
