#include<iostream>
using namespace std;

int main(){
	// Creating the "punishments" variable
	int punishments;
	cout << "Enter the number of lines for the punishment: \n";
	cin >> punishments;
	
	// If our input is not an integer or is below 0...
	if (!cin || punishments < 0){
		cout << "You entered an incorrect value for the number of lines!";
		}

	for (int i = 0; i < punishments; i++){
		cout << "I will always use object oriented programming." << "\n";
}
	return 0;
}
