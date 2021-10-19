// If you have something that you want to have predefined options,
// for example mood (happy, sleepy, sad), you could define a mood,
// and that mood can only take in certain options.

#include<iostream>
#include <string>
using namespace std;

// Values automatically set to 0,1,2,3 if not defined.
// But it adds one if the one before it is defined, and it's not.
// For example, SAD = 301.
enum mood {HAPPY=1, SLEEPY=300, SAD, ANGRY=670};


int main(){
	mood myMood = SLEEPY;
	// mood myMood = (mood)300; also works.
	cout<<myMood;// Prints 300.
	
	cout << "\n";
	
	if(myMood == SLEEPY){
		cout <<"Watch funny video";
	}
	else if(myMood = ANGRY){
		cout<<"Grind your teeth and roar";
	}
	
	cout << endl << myMood;
}
