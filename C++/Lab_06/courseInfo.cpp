#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

struct Time{
	int hour;
	int minutes;
	int seconds;
};

struct Course{
	string name;
	int credits;
	bool majorRequirement;
	double avgGrade;
	string days;
	Time startTime;
	Time endTime;
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

void courseInformation(Course *Info, int courseNumber){
	
	/////// OPENS FILE ////////
	ifstream myfile("in.txt");
	string temp;
	
	int count = 0;
	while (!myfile.eof()){
		getline(myfile,temp);
		count++;
	}
	
	string *items = new string[count];
	myfile.close();
	myfile.open("in.txt");
	
	// Puts all items of text file into an array.
	for (int i = 0; i < count; i++){
		getline(myfile,items[i]);
	}
	myfile.close();
	/////// CLOSES FILE ////////
	
	string userName, userDays;
	int userCredits;
	bool userMajorRequirement;
	double userAvgGrade;
	
	(*Info).name= userName;
	(*Info).credits = userCredits;
	(*Info).majorRequirement = userMajorRequirement;
	(*Info).avgGrade = userAvgGrade;
	(*Info).days = userDays;
	
	userName = items[1];

	Time startTime, endTime;
	int checkStart, checkEnd;
	
	checkStart = getTimeFromUser(&startTime, items[6*courseNumber]);
	
	if (checkStart == 0){
		cout << "The start time entered is invalid!";
		exit(0);
	}
	
	checkEnd = getTimeFromUser(&endTime, items[7*courseNumber]);

	
	cout << "COURSE " << courseNumber <<": " << userName << "\n";
	
	if (userMajorRequirement == 0){
		cout << "This course is not a major requirement..."<< "\n";
	}
	if (userMajorRequirement == 1){
		cout << "This course is a major requirement!"<< "\n";
	}
	cout << "Number of Credits: " << userCredits << "\n";
	cout << "Days of Lectures: " << userDays << "\n";
	
	if (checkEnd == 0){
		cout << "The end time entered is invalid!";
		exit(0);
	}
	if (checkStart == 1 && checkEnd == 1){
		cout << "Lecture Time: "; 
		print24Hour(startTime); 
		cout << " - ";
		print24Hour(endTime);
		cout << "\n";
	}
	
	cout << "Stat: on average students get " << userAvgGrade << "% in this course." << "\n";
}

int main(){
		/////// OPENS FILE ////////
	ifstream myfile("in.txt");
	string temp;
	
	int count = 0;
	while (!myfile.eof()){
		getline(myfile,temp);
		count++;
	}
	
	string *items = new string[count];
	myfile.close(); 
	myfile.open("in.txt");
	
	// Puts all items of text file into an array.
	for (int i = 0; i < count; i++){
		getline(myfile,items[i]);
	}
	
	Course studentInfo;
	
	// Converts string to int
	int courses = atoi(items[0].c_str());
	
	cout << "-------------------" << endl;
	cout << "SCHEDULE OF STUDENT" << endl;
	
	for (int i=0; i<courses; i++){
		cout << "-------------------" << endl;
		courseInformation(&studentInfo ,i+1);
	}
	
	myfile.close();
	

}
