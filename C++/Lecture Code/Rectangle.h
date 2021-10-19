#include<iostream>
#include <string>
using namespace std;

class Rectangle{
	int width, height; // private (default)
	
	// This is a member function.
	// It can access any member of this class.
	public:
		void set_values(int, int);
		int area (void){
			return width*height; // Gets us the Area
		}; // declaration
};

