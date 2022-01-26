//Time class skeleton
class Time
{
	public:
	Time();
	Time(int S, int M, int H);
	~Time();
	void SetSeconds(int S);
	void SetMinutes(int M);
	void SetHours(int H);
	int GetSeconds();
	int GetMinutes();
	int GetHours();

	private:
	int Seconds;
	int Minutes;
	int Hours;
};
