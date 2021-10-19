// Reversing a given word

#include<iostream>
using namespace std;

int main(){
	string word;
	cout << "Enter a word to reverse: ";
	cin >> word;
	int wordLength = word.length();
	
	// Our for loop goes from the length of our word - 1 to 0.
	// Example: "Dog"
	// Length: 3
	// 3 - 1 = 2
	// From two to zero, for loop: 2 1 0
	for (int i = wordLength-1; i >= 0; i--){
		// Then we loop through our string in reverse.
		cout << word[i];
	}
	return 0;
}
