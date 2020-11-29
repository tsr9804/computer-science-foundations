#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Please enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i * 2 << '\n';
    }

    return 0;
}
