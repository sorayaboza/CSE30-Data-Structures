#include "BTree.h"

// Constructor
BTree::BTree(){
	// Initializing the root, the binary tree is empty
	root = NULL;
}

// Destructor
BTree::~BTree(){
	destroy_tree();
}

Node* BTree::BTree_root(){
	return root;
}

void BTree::destroy_tree(Node *leaf){
	if (leaf != NULL){
		BTree::destroy_tree(leaf->left);
		BTree::destroy_tree(leaf->right);
		delete(leaf);
	}
}

void BTree::insert(int key, Node* leaf){
	if (key < leaf->key_value){ // we want to go to the left
		if (leaf->left == NULL){
			Node* t = new Node;
			t->key_value = key;
			t->left = NULL;
			t->right = NULL;
			leaf->left = t;
		}
		else{
			BTree::insert(key, leaf->left);
		}
	}
	if (key > leaf->key_value){ // we want to go to the right
		if (leaf->right == NULL){
			Node* t = new Node;
			t->key_value = key;
			t->left = NULL;
			t->right = NULL;
			leaf->right = t;
		}
		else{
			BTree::insert(key, leaf->right);
		}
	}
}

Node* BTree::search(int key, Node *leaf){
	if (leaf == NULL){
		return NULL;
	}
	else{
		if (key == leaf->key_value){
			return leaf;
		}
		if (key < leaf->key_value){
			return BTree::search(key, leaf->left);
		}
		if (key > leaf->key_value){
			return BTree::search(key, leaf->right);
		}	
	}
}

void BTree::insert(int key){
	if (root == NULL){
		Node *t = new Node;
		root = t;
		root->left = NULL;
		root->right = NULL;
		root->key_value = key;
	}else{
		BTree::insert(key, root);
	}
}

Node* BTree::search(int key){
	BTree::search(key, root);
}

void BTree::destroy_tree(){
	BTree::destroy_tree(root);
}
