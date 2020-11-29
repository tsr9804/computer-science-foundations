#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    int year = stoi(argv[1]);

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

    if (isleap)
        cout << year << " was a leap year" << endl;
    else
        cout << year << " was not a leap year" << endl;

    return 0;
}
