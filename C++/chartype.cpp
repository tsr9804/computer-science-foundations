#include<iostream>
using namespace std;


int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lower case letter.";
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an upper case letter.";
    } else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit.";
    } else {
        cout << ch << " is a non-alphanumeric character.";
    }

    return 0;
}


