#include<iostream>
#include<string>
using namespace std;

string remainingwords(string s){
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            return s.substr(i+1, string::npos);
        }
    }
    return "";
}


int main() {
    string test = "abc def";
    cout << remainingwords(test);
    return 0;
}

