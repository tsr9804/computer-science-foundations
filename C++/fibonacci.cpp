#include <iostream>
using namespace std;

int main() {
    int n, first, second, next;

    cout << "Please enter a positive integer greater than 1: ";
    cin >> n;

    cout << 1 << endl;
    first = 0;
    second = 1;
    for (int i = 0; i < n-1; i++) {
        next = first + second;
        cout << next << endl;
        first = second;
        second = next;
    }

    return 0;
}
