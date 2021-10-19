// recursion: a function making a call to itself.
// When a function calls itself, this is a *recurvise call*.
// Recursion is a useful wa for defining objects that have a repeated similar structural form.
// linear recursion: a function is defined so that it makes at most one recursive call each time it's invoked.

// swap function introduced in lecture

#include<iostream>
using namespace std;

int main(){
	string word;
	cout << "Enter a word to reverse: ";
	cin >> word;
	int wordLength = word.length();
	
	//char wordArray[word.length()];
	
	for (int i = wordLength-1; i >= 0; i--){
		//wordArray[i] = word[i];
		//cout << swap(wordArray[i]);
		cout << word[i] << " ";
		cout << i<<endl;
	}
	return 0;	
}
