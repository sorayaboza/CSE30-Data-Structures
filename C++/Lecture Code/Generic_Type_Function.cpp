#include <iostream>
#include <string>
using namespace std;

template <class Fred>

Fred maximum(Fred first, Fred second){
	if(first >= second){
		return first;
	}
	else{
		return second;
	}
}

int main(){

	cout << maximum<int>(2,1)<< "\n";
	cout << maximum<double>(5.4,1.3)<< "\n";
	cout << maximum<string>("Hello","Bye")<< "\n";
	cout << maximum<string>("aa","ab");
}
