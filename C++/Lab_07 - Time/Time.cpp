#include "Time.h"

int Seconds, Minutes, Hours;

//Constructor
Time::Time()
{
//Initiate to 0
Seconds = 0;
Minutes = 0;
Hours = 0;
}

//Alternative constructor that takes 3 values
Time::Time(int S, int M, int H)
{
//Initiate to values
Seconds = S;
Minutes = M;
Hours = H;
}

//Destructor
Time::~Time()
{

}

// Setting time
void Time::SetSeconds(int S)
{
	Seconds = S;
}
void Time::SetMinutes(int M)
{
	Minutes = M;
}
void Time::SetHours(int H)
{
	Hours = H;
}

// Getting time
int Time::GetSeconds()
{
	return Seconds;
}
// x.GetSeconds() = some num
int Time::GetMinutes()
{
	return Minutes;
}
int Time::GetHours()
{
	return Hours;
}

