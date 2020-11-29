#include<iostream>
using namespace std;

double* getDoubles(int numDoubles) {
    double *doubles = new double[numDoubles];
    for (int i = 0; i < numDoubles; i++) {
        doubles[i] = (double)(i+1)/3;
    }
    return doubles;
}


int main() {
    double* test = getDoubles(3);
    for (int i = 0; i < 3; i++) {
        cout << *(test + i) << endl;
    }
}
