// Takes one text file and inputs it's contents into a new file.

#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	ifstream myfile("words_in.txt"); // In the stream
	ofstream newfile("words_out.txt"); // Out the stream
	
	string temp;
	
	int count = 0;
	while (!myfile.eof()){ // eof means "end of file"
	// The function 'getline' *needs* two inputs, hence our 'temp' string
		getline(myfile,temp);
		count++; // Counting the lines until it reaches the "end of file"
	}
	
	string *names = new string[count]; // Pointer is necessary.
	// We need to reopen the file.
	myfile.close();
	myfile.open("words_in.txt");
	
	// Looping through the amount of lines in the file
	for (int i = 0; i < count; i++){
		// Getting each line and inputting it into array "names"
		getline(myfile,names[i]);
		cout << names[i] <<"\n";
	}
	for (int i = 0; i < count; i++){
		// Placing new array into new file.
		newfile << names[i]<<"\n";
	}
	

	myfile.close();
	newfile.close();
	return 0;
}
