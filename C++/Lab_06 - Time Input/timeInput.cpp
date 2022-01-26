// Time structure that keeps track of various times of the day.
// Checks is given time is valid.
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct Time{
	int hour;
	int minutes;
	int seconds;
};

bool getTimeFromUser(Time *point, string timeInput){
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
	(*point).hour= hourInput;
	(*point).minutes = minutesInput;
	(*point).seconds = secondsInput;
	
	return 1;
}

void print24Hour(Time point){

	cout << point.hour << ":" << point.minutes << ":" << point.seconds;

}

int main () {
	int hourInput, minutesInput, secondsInput;
	Time startTime, endTime;
	int checkStart, checkEnd;
	
	string timeStartInput;
	cout << "Enter the time start for the lecture (format is HH:MM:SS): ";
	getline(cin,timeStartInput); // Allows us to read ":" symbols.
	checkStart = getTimeFromUser(&startTime, timeStartInput);
	
	if (checkStart == 0){
		cout << "The start time entered is invalid!";
		return 0;
	}
	
	string timeEndInput;
	cout << "Enter the time start for the lecture (format is HH:MM:SS): ";
	getline(cin,timeEndInput);
	checkEnd = getTimeFromUser(&endTime, timeEndInput);
	
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
