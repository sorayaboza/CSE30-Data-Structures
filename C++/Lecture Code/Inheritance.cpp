#include <iostream>
#include <stack>

using namespace std;

class fruit{
	public:
		int numSeeds = 10;
		string color = "blue";
	protected:
		double skinThickness = 0.01;
};

// Inheriting from fruit,
class apple: public fruit{
	public:
		double stemLength = 0.5; // Inches
		double getSkinThickness(){
			return skinThickness;
		}
};

void printSkinThickness(fruit f){
	f.skinThickness;
}

int main(){
	fruit myFruit;
	cout << myFruit.numSeeds << endl;// Gives number of seeds.
	apple myApple;
	cout << myApple.numSeeds << endl;
	cout << myApple.stemLength << endl;
//	cout myFruit.skinThickness;	// Won't work because it's protected.
	cout << myApple.getSkinThickness();
}
