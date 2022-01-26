#ifndef _STACK_H
#define _STACK_H
#include "LinkedList.h"


using namespace std;

class Stack : public LinkedList{ // We're inheriting from LnkedList
	public:
		Stack(); // Default Constructor
		~Stack(); // Destructor
		void push(int value); // inserts a new element (value) at front of stack, by calling the appropriate LinkedList function
		int pop(); // removes the first element of the Stack, by calling the appropriate LinkedList function. It also returns the value of the element that has been popped.
		int& top(); // returns a reference to the top element of the Stack.
};

#endif
