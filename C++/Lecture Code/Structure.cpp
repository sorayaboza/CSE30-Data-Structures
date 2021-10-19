// Structures

#include<iostream>
#include <string>
using namespace std;

struct vehicle{
	string make;
	string model;
	int year;
};

int main(){
	vehicle scooter;
	scooter.make = "Honda";
	scooter.model = "Speedy";
	scooter.year = 1955;
	
	cout << "Scooter: "<< scooter.make << "\n";
	
	// Using pointers in structures
	vehicle *car = new vehicle();
	car->make= "Mercedes";
	
	cout << "Car: " << car->make << "\n";
	
	
}
