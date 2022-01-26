#include <iostream>
#include <string>
#include "Queue.h"
#include "LinkedList.h"

using namespace std;

Queue::Queue(){} // CONSTRUCTOR
Queue::~Queue(){}; // DESTRUCTOR

void Queue::enqueue(int value){
// We have to tell the program where 'insertAtFront' comes from, and it comes from LinkedList.
	LinkedList::insertAtBack(value);
}
int Queue::dequeue(){
	int t = 0;
	if (!LinkedList::isEmpty()){
		t =  first->val;
	}
	LinkedList::removeFromFront();
	return t;
} 

int& Queue::front(){
	Node *n = first;
	if (!LinkedList::isEmpty()){
		n = first;
		return n->val;
	}else{
		int temp = 0;
		return temp;
	}
}

