#include<iostream>
using namespace std;

int main(){
	int punishments;
	cout << "Enter the number of lines for the punishment: \n";
	cin >> punishments;
	
	if (!cin || punishments < 0){
		cout << "You entered an incorrect value for the number of lines!";
}
	// Creating the "typo" variable
	int typo;
	cout << "Enter the line for which we want to make a typo: \n";
	cin >> typo;
	
	if (!cin || typo > punishments || typo < 0){
		cout << "You entered an incorrect value for line typo! \n";
		exit(-1); // This instantly ends my program if this if statement is true.
	}
	
	char mispelled[] = "I will always use object oriented programing.";
	
	int punishArr[punishments];
	
	int i;
	for (i = 0; i < punishments; i++){
		if (i+1 == typo){
			cout << "I will always use object oriented programing."<< "\n";
		}
		else{
			cout << "I will always use object oriented programming." << "\n";
		}

}
	return 0;
}
