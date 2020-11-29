#include<iostream>
using namespace std;


void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


int main() {
    int lst[] = {1,2,3,4};
    swap(&lst[0], &lst[1]);
    for (int n: lst){
        cout << n << endl;
    }
    return 0;
}
