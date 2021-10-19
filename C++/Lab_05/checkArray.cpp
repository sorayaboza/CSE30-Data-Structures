// Checking if an list in "words_in" text file is in sorted.
// After checking it's sorted, it checks if it's in ascending or descending.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int maximum(string *names, int count){
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < count-2; i++){
		// Ascending
		if (names[i] < names[i+1]){
			count1++;
		}
		// Descending
		if (names[i] > names[i+1]){
			count2++;
		}
	}

	int result = 0;
	
	// Ascending
	if (count-2 == count1){
		result = 1;
	}
	//Descending
	if (count-2 == count2){
		result = -1;
	}
	return result;
}

int main () {
	ifstream myfile("words_in.txt"); // In the stream
	string temp;
	
	int count = 0;
	while (!myfile.eof()){
		getline(myfile,temp);
		count++;
	}
	
	string *names = new string[count];
	myfile.close();
	myfile.open("words_in.txt");
	
	for (int i = 0; i < count; i++){
		getline(myfile,names[i]);
		cout << names[i] <<"\n";
	}
	
	if (maximum(names,count) == 1){
		cout << "The array is sorted in acending order!";
	}
	if (maximum(names,count) == -1){
		cout << "The array is sorted in descending order!";
	}
	if (maximum(names,count) == 0){
		cout << "The array is not sorted!";
	}
	myfile.close();
	return 0;
}
