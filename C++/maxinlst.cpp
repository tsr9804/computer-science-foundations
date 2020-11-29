#include <iostream>
using namespace std;

int maxinlst(int lst[], int size);


int main() {
    int test[] = {1,2,3,4,5,6};
    int max = maxinlst(test, 6);
    cout << max << endl;
    return 0;
}


int maxinlst(int lst[], int size) {
    int max = lst[0];
    for (int i = 0; i < size; i++) {
        if (max < lst[i]) {
            max = lst[i];
        }
    }
    return max;
}
