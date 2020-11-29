#include<iostream>
using namespace std;

int reverse(int n, int temp){
    if (n == 0)
        return temp;

    temp = (temp * 10) + (n % 10);
    return reverse(n / 10, temp);
}

bool is_palindrome(int test) {
    return reverse(test, 0) == test;
}


int main() {
    int x = 1441;
    cout << is_palindrome(x) << endl;
    return 0;
}
