#ifndef _STACK_H
#define _STACK_H
#include "LinkedList_char.h"


using namespace std;

class Stack : public LinkedList{ // We're inheriting from LnkedList
	public:
		Stack(); // Default Constructor
		~Stack(); // Destructor
		void push(char value); // inserts a new element (value) at front of stack, by calling the appropriate LinkedList function
		char pop(); // removes the first element of the Stack, by calling the appropriate LinkedList function. It also returns the value of the element that has been popped.
		char& top(); // returns a reference to the top element of the Stack.
		void print();
};

#endif
