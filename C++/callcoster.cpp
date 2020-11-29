#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

const int MIN_START = 800;
const int MAX_END = 1800;
const double WEEKDAY_RATE_LOW = 0.25;
const double WEEKDAY_RATE_HIGH = 0.4;
const double WEEKEND_RATE = 0.15;
const string WEEKDAYS = "MonTueWedThrFri";


int main() {
    int start, duration;
    double total;
    string day;

    cout << "Enter the day the call started at: ";
    cin >> day;
    cout << "Enter the time the call started at (hhmm): ";
    cin >> start;
    cout << "Enter the duration of the call (in minutes): ";
    cin >> duration;

    if (WEEKDAYS.find(day) != string::npos) {
        if (MIN_START <= start  && start <= MAX_END){
            total = WEEKDAY_RATE_HIGH * duration;
        } else {
            total = WEEKDAY_RATE_LOW * duration;
        }
    } else {
        total = WEEKEND_RATE * duration;
    }

    cout << setprecision(2) << fixed << "This call will cost $" << total << endl;

    return 0;
}

