#include<iostream>
#include <string>
using namespace std;
// Calling the class in Rectangle
#include "Rectangle.h"

// To define set_values
void Rectangle::set_values (int w, int h){
	width = w;
	height = h;
}

int main(){
	
	Rectangle rect1;
	rect1.set_values(5, 10);
	cout << rect1.area(); // Prints 50.
	
	cout << "\n";	
	Rectangle rect2;
	rect2.set_values(6,9);
	cout << rect2.area(); // Prints 54.
}
