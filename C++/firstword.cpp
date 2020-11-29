#include<iostream>
#include<string>
using namespace std;

string firstword(string s);


int main() {
    string test = "abc def";
    cout << firstword(test);
    return 0;
}


string firstword(string s){
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            return s.substr(0, i);
        }
    }
    return s;
}
