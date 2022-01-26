#include <iostream>
#include <string>
#include "Stack_char.h"
#include "LinkedList_char.h"

using namespace std;

Stack::Stack(){} // CONSTRUCTOR
Stack::~Stack(){}; // DESTRUCTOR

void Stack::push(char value){
// We have to tell the program where 'insertAtFront' comes from, and it comes from LinkedList.
	LinkedList::insertAtFront(value);
}
char Stack::pop(){	
	char t =  first->val;
	LinkedList::removeFromFront();
	return t;
} 

char& Stack::top(){
	Node *n = first;
	return n->val;
}

void Stack::print(){
	LinkedList::print();
}
