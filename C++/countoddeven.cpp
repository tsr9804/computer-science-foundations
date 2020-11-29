#include <iostream>
#include <string>
using namespace std;

int main() {
    int val1, val2, val3, val4;

    cout << "Please enter 4 positive integers, separated by a space: ";
    cin >> val1 >> val2 >> val3 >> val4;

    int evenCount = 0;
    if (val1 % 2 == 0)
        evenCount += 1;
    if (val2 % 2 == 0)
        evenCount += 1;
    if (val3 % 2 == 0)
        evenCount += 1;
    if (val4 % 2 == 0)
        evenCount += 1;

    if (evenCount < 2){
        cout << "more odds";
    } else if (evenCount > 2){
        cout << "more evens";
    } else {
        cout << "same number of evens and odds";
    }

    return 0;
}
