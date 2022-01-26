#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;
Node* first = NULL;
Node* last = NULL;

LinkedList::LinkedList(){ // CONSTRUCTOR
	first = NULL; // Pointer pointing to the begining of the list
    last = NULL;
}
LinkedList::~LinkedList(){ // DECONSTRUCTOR
}
void LinkedList::insertAtBack(int valueToInsert){
	Node *t = new Node;
	t->val = valueToInsert; // 1, 2 , 3, 4, 5
	t->next=NULL;
	if (isEmpty()){
		first=t;
		last=t;
	}
	else{
		last->next=t;
		last=t;
	}
}
// Reference:
// https://www.geeksforgeeks.org/remove-last-node-of-the-linked-list/
bool LinkedList::removeFromBack(){
	
	if (first == NULL){
		return 0;
	}
	if (first->next == NULL){
		first = NULL;
		return 1;
	}
	// We're getting the second last node
	Node* second_last = first;
	while (second_last->next->next != NULL){ // the 2nd to last value before NULL
		second_last = second_last->next; //Seting to the one BEFORE NULL
	}
	delete (second_last->next); // Now we're deleting that final node
	second_last->next = NULL; // and setting the value after that to NULL.

	return 1;
}
void LinkedList::print(){
	Node* t = first;
	if (t == NULL){
		return;
	}
	while (t != NULL){ // Checking for all values,
		cout << t->val; // set each value in array for t.
		if (t->next == NULL){
			cout << "";
		}
		else if (t != last){ // Prints all the commas in between.
			cout << ",";
		}
		t = t->next;
	}
}

bool LinkedList::isEmpty(){
	Node* checkEmpty = first;
	if (checkEmpty == NULL){
		return 1;
	}else{
		return 0;
	}
}

int LinkedList::size(){
	int count = 0;
	Node* check = first;
	
	if (check == NULL){
		return 0;
	}else{
		while (check != NULL){
			check = check->next;
			count++;
		}
		return count;
	}
}

void LinkedList::clear(){;
	Node* t = first;
	Node* next = NULL;
	while (t != NULL){
		next = t->next; 
		delete t;
		t = next;
	}
	first = NULL;
}

void LinkedList::insertAtFront(int valueToInsert){
	Node* t = new Node; // Creating a new node, t.
	t->val = valueToInsert; // Storing our data
	t->next = first; // The first item now follows t.
	first = t; // Now, t is the first item.
}
bool LinkedList::removeFromFront(){ // This function removes the first item.
	if (first == NULL){
		return 0;
	}
	if (first->next == NULL){
		first = NULL;
		return 1;
	}
	Node* old = first; // This saves the current first item.
	first = old->next; // Here, we're skipping over the old first item.
	delete old; // This deletes the old first item.
	
	return 1;                                      
}
