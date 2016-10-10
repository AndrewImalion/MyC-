//regulation TimeOfDay.h

class TimeOfDay
{
public:
	TimeOfDay();
	TimeOfDay(int intiHours, int intiMinutes, int intiSeconds);
	TimeOfDay Increment() const;
	void Write() const;
	bool Equal(TimeOfDay otherTimeOfDay) const;
	bool LessThan(TimeOfDay otherTimeOfDay) const;
private:
	int hours;
	int minutes;
	int seconds;
};