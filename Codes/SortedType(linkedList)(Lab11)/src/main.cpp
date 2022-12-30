#include <iostream>
#include <iomanip>
#include "SortedType.cpp"

using namespace std;

class timeStamp {
private:
	int hours, minutes, seconds;
public:
	timeStamp() {
		hours = 0;
		minutes = 0;
		seconds = 0;
	}
	timeStamp(int s, int m, int h) {
		hours = h;
		minutes = m;
		seconds = s;
	}
	void setValue(timeStamp t) {
		hours = t.hours;
		minutes = t.minutes;
		seconds = t.seconds;
	}
	bool operator==(timeStamp t) {
		if (seconds == t.seconds && minutes == t.minutes && hours == t.hours)
			return true;
		else
			return false;
	}
	bool operator>(timeStamp t) {
		if ((seconds > t.seconds) && (minutes > t.minutes) && (hours > t.hours))
			return true;
		else
			return false;
		return false;
	}
	bool operator<(timeStamp t) {
		if ((seconds < t.seconds) || (minutes < t.minutes) || (hours < t.hours))
			return true;
		else
			return false;
		return false;
	}
	void print() {
		cout << setfill('0') << setw(2) << seconds << ":" << setw(2) << minutes
				<< ":" << setw(2) << hours << endl;
	}
};

int main() {
	SortedType<timeStamp> list;
	timeStamp t(15, 34, 23);
	list.InsertItem(t);
	list.InsertItem(timeStamp(13, 13, 02));
	list.InsertItem(timeStamp(43, 45, 12));
	list.InsertItem(timeStamp(25, 36, 17));
	list.InsertItem(timeStamp(52, 02, 20));

	list.DeleteItem(timeStamp(25, 36, 17));

	for (int i = 0; i < list.LengthIs(); i++) {
		list.GetNextItem(t);
		t.print();
	}
	return 0;
}
