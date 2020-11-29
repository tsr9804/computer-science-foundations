#include <iostream>
#include <string>
using namespace std;

int main() {
    int grade1, grade2;
    string status;

    cout << "Please enter 2 grades, separated by a space: ";
    cin >> grade1 >> grade2;

    if (grade1 < 60 && grade2 < 60) {
        status = "Student Failed:(";
    } else if (grade1 >= 95 && grade2 >= 95) {
        status = "Student Graduated with Honors:)";
    } else {
        status = "Student Graduated!";
    }

    cout << status;

    return 0;
}
