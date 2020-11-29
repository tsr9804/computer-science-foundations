#include <iostream>
using namespace std;

bool isLeapYear(int year);


int main() {
    int myBirthYear = 2000;
    if (isLeapYear(myBirthYear)) {
        printf("Year %i  was a leap year", myBirthYear);
    }
    return 0;
}


bool isLeapYear(int year) {
    bool isleap = false;
    if (year % 4 == 0) {
        isleap = true;
        if (year % 100 == 0) {
            isleap = false;
            if (year % 400 == 0) {
                isleap = true;
            }
        }
    }
    return isleap;
}