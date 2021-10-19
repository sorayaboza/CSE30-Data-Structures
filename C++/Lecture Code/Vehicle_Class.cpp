#include <iostream>
#include <string>
using namespace std;

class vehicle{
	private:
		int numTires;
		int year = 1982;
		string rim;
		double tintPercent;
		double engineSize;
		int numSeats;
};

class truck : public vehicle{
	public:
		double bedSize;
		int getYear();	
};

int truck::getYear(){
	return year;
}

class sedan : public vehicle{
	public:
		bool sunroof = true;
};

int main(){
	truck ford;
	cout<< ford.year <<endl;
	sedan tito;
	cout<< tito.year;
}
