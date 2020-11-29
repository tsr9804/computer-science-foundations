#include <iostream>
using namespace std;

int maxAbsInLst(int lst[], int size);;
int getAbs(int n);


int main() {
    int test[] = {-7, -2, -3, 4, 5, 6};
    int max = maxAbsInLst(test, 6);
    cout << max << endl;
    return 0;
}


int maxAbsInLst(int lst[], int size) {
    int max = getAbs(lst[0]);
    for (int i = 0; i < size; i++) {
        int absVal = getAbs(lst[i]);
        if (max < absVal) {
            max = absVal;
        }
    }
    return max;
}

int getAbs(int n) {
    if (n < 0) {
        return n * -1;
    }
    return n;
}
