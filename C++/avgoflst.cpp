#include <iostream>
using namespace std;

float avgOfLst(int lst[], int size);

int main() {
    int test[] = {19, 2, 20, 1, 0, 18};
    int avg = avgOfLst(test, 6);
    cout << avg << endl;
    return 0;
}


float avgOfLst(int lst[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += lst[i];
    }
    return sum / size;
}
