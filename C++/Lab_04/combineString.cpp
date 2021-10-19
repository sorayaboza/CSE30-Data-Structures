// Combines a given string a given amount of times.
#include<iostream>
#include <string>

using namespace std;

void combineStr(string user_string, int num_of_times){
	int length;
	// Getting the length of the given string.
	length=user_string.length();
	
	// The length of our word * the number of given times
	// will be the size of our array.
	length=length*num_of_times;
	string A[length];
	
	for (int i = 0; i < num_of_times; i++){
		A[i] = user_string;
		cout << A[i]; // Storing into our array.
	}

}

int main(){
	
	string user_string;
	int num_of_times;
	
	cout << "Enter a string: ";
	cin >> user_string;

	cout << "Enter a number of times: ";
	cin >> num_of_times;
	
	combineStr(user_string,num_of_times);
}
