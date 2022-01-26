#include <iostream>
#include <string>
#include "Stack.h"
#include "LinkedList.h"

using namespace std;

Stack::Stack(){} // CONSTRUCTOR
Stack::~Stack(){}; // DESTRUCTOR

void Stack::push(int value){
// We have to tell the program where 'insertAtFront' comes from, and it comes from LinkedList.
	LinkedList::insertAtFront(value);
}
int Stack::pop(){
	first = first - 1; 
	return first->val;
} 

int& Stack::top(){
	Node *n = first;
	return n->val;
}


