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
	
	vehicle scooter ("honda","speedster",1986);
	vehicle *p_scooter = &scooter;
	(*p_scooter).year = 2019;
	
	cout << "Scooter year: " << scooter->year<< "\n";
}
