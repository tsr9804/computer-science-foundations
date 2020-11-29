#include<iostream>
#include<string>
using namespace std;


int main() {
    string s, start, mid, end;
    int length;

    cout << "Enter an odd length string: ";
    getline(cin, s);

    length = s.length();
    start = s.substr(0, length/2);
    mid = s.substr(length/2, 1);
    end = s.substr(length/2 + 1, length/2);

    cout << "Middle character: " << mid << endl;
    cout << "First half: " << start << endl;
    cout << "Second half: " << end << endl;

    return 0;
}


