#include <iostream>
#include <string>
#include <stdlib.h>
#include "Time.cpp"

using namespace std;

bool getTimeFromUser(Time& c, string timeInput){
	int hourInput, minutesInput, secondsInput;

	int hourCheck = timeInput.find(":"); // equals 2 if valid input
	int secondsCheck = timeInput.find(":",3); // equals 5 if valid input
	if (hourCheck != 2 || secondsCheck != 5 || timeInput.size() != 8){
		return 0;
	}
	
	hourInput = atoi(timeInput.substr(0,2).c_str()); // Hours
	minutesInput = atoi(timeInput.substr(3,2).c_str()); // Minutes
	secondsInput = atoi(timeInput.substr(6,7).c_str()); // Seconds
	
	// Checking if time is in bounds.
	if (hourInput >= 24 || minutesInput >= 60 || secondsInput>= 60){
		return 0;
	}
	if (hourInput < 0 || minutesInput < 0 || secondsInput < 0){
		return 0;
	}
	
	// Works just like returns
	c.SetHours(hourInput);
	c.SetMinutes(minutesInput);
	c.SetSeconds(secondsInput);
	
	return 1;
}

void print24Hour(Time& c){

	cout << c.GetHours() << ":" << c.GetMinutes() << ":" << c.GetSeconds();

}

int main () {
	int hourInput, minutesInput, secondsInput;
	Time startTime, endTime;
	int checkStart, checkEnd;
	
	string StartInput; // Package
	cout << "Enter the time start for the lecture (format is HH:MM:SS): ";
	getline(cin,StartInput); // Allows us to read ":" symbols.
	checkStart = getTimeFromUser(startTime, StartInput);
	
	if (checkStart == 0){
		cout << "The start time entered is invalid!";
		return 0;
	}
	
	string EndInput; // Package
	cout << "Enter the time start for the lecture (format is HH:MM:SS): ";
	getline(cin,EndInput);
	checkEnd = getTimeFromUser(endTime, EndInput);
	
	if (checkEnd == 0){
		cout << "The end time entered is invalid!";
		return 0;
	}
	
	if (checkStart == 1 && checkEnd == 1){
		cout << "The lecture starts at "; 
		print24Hour(startTime); 
		cout << " and ends at ";
		print24Hour(endTime);
	}

}
