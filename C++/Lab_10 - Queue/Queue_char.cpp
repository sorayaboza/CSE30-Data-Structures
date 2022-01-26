#include <iostream>
#include <string>
#include "Queue_char.h"
#include "LinkedList_char.h"

using namespace std;

Queue::Queue(){} // CONSTRUCTOR
Queue::~Queue(){}; // DESTRUCTOR

void Queue::enqueue(char value){
// We have to tell the program where 'insertAtFront' comes from, and it comes from LinkedList.
	LinkedList::insertAtBack(value);
}
char Queue::dequeue(){
	char t = '?';
	if (!LinkedList::isEmpty()){
		t =  first->val;
	}
	LinkedList::removeFromFront();
	return t;
} 

char& Queue::front(){
	Node *n = first;
	if (!LinkedList::isEmpty()){
		n = first;
		return n->val;
	}else{
		char temp = '?';
		return temp;
	}
}

