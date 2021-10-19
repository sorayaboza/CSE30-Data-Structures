#include <iostream>
#include <string>
using namespace std;

template <class T>
class Pair{
	T values[2];
	public:
		Pair(T first, T second){
			values[0] = first;
			values[1] = second;
		}
		void printPair(){ // Has access to the private values, because
		// they belong to the same class.
			cout<<values[0]<<endl;
			cout<<values[1]<<endl;
		}
};

int main(){
	Pair<string> myPair("a","bb");
	myPair.printPair();
}
