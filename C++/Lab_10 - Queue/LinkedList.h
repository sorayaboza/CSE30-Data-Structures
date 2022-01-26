#ifndef LINKEDLIST_H 
#define LINKEDLIST_H

using namespace std; 

// Representation of an element in the linked list
struct Node 
{
    int val; // Value of the node
    Node *next; // Pointer to the next node
};

class LinkedList 
{
    // Public Functions/Variables
    public:
        LinkedList(); // Constructor
        ~LinkedList(); // Destructor
        void insertAtBack(int valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();

        void insertAtFront(int valueToInsert);
        bool removeFromFront();
        
        Node *first = NULL; // Pointer pointing to the begining of the list
        Node *last = NULL; // Pointer pointing to the end of the list
};

#endif

