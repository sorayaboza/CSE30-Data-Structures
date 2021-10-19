#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<string> books;
	books.push("The Hobbit");
	books.push("LOTR");
	books.push("Misborn");
	books.push("Harry Potter");
	
	cout<< books.top(); // Prints Harry Potter.
	
	cout << "\n";
	
	books.pop();
	cout<< books.top(); // Prints Misborn.
	
}
