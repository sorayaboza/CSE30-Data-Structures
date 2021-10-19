// Searches for a given key in your text file, and gives you the index.

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

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

// Looping binary search
int bS(string key, int first, int last, string *names){
	int middle = (first + last)/2;
	
	// Checks if the key is exactly first, middle, or last.
	if (names[first] == key){
		return first;
	}
	if (names[last] == key){
		return last;
	}
	if (names[middle] == key){
		return middle;
	}
	// Check if the given key is in the text list.
	if (last - first <= 1){
		return -1;
	}
	
	if (names[middle] > key){
		for (int i = first; i < middle; i++){
			if (names[i] == key){
				return i;
			}
		}
	}
	if (names[middle] < key){
		for (int i = middle; i < last; i++){
			if (names[i] == key){
				return i;
			}
		}
	}
	return -1;

}

int main () {
	ifstream myfile("words_in.txt"); // In the stream
	string temp;
	
	string key;
	cout <<  "Input your search key: " << "\n";
	cin >> key;
	
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
	
	// Checks if the text array is sorted.
	if (maximum(names,count) == 0){
		cout <<"The array is not sorted.";
		return 0;
	}
	
	if (bS(key,0, count-2,names) == -1){
		cout << "The key '" << key << "' was not found in the array!";
	}
	else{
		cout << "Found key '" << key << "' at index " << bS(key,0,count-2,names) << "!";
	}
	
	maximum(names,count);

	myfile.close();
	return 0;
}
