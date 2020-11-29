#include<iostream>
using namespace std;

void merge(int arr[], int left, int middle, int right) {
    int leftLow = left;
    int leftHigh = middle;
    int rightLow = middle + 1;
    int rightHigh = right;
    int size = left + right + 1;
    int *mergedArr = new int[size];

    int idx = 0;
    while ((leftLow <= leftHigh) && (rightLow <= rightHigh)) {
        if (arr[leftLow] < arr[rightLow]) {
            mergedArr[idx] = arr[leftLow];
            leftLow++;
        } else {
            mergedArr[idx] = arr[rightLow];
            rightLow++;
        }
        idx++;
    }

    while (leftLow <= rightLow) {
        mergedArr[idx] = arr[leftLow];
        leftLow++;
    }

    while (rightLow <= rightHigh) {
        mergedArr[idx] = arr[rightLow];
        rightLow++;
    }

    for(int i = left; i <= right; i++){
        arr[i] = mergedArr[i];
    }

    delete [] mergedArr;
}


int main() {
    int lst[] = {0,  2, 1, 18, 20};
    merge(lst,0,1,3);
    for (int n: lst){
        cout << n << endl;
    }
    return 0;
}
