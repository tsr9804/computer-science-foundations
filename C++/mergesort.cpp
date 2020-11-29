#include<iostream>
using namespace std;

void merge(int arr[], int left, int middle, int right) {
    int leftLow = left;
    int leftHigh = middle;
    int rightLow = middle + 1;
    int rightHigh = right;
    int size = right - left + 1;
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

    while (leftLow <= leftHigh) {
        mergedArr[idx] = arr[leftLow];
        leftLow++;
        idx++;
    }

    while (rightLow <= rightHigh) {
        mergedArr[idx] = arr[rightLow];
        rightLow++;
        idx++;
    }

    for(int i = 0, iArr = left; i < size; i++, iArr++){
        arr[iArr] = mergedArr[i];
    }

    delete [] mergedArr;
}

void merge_sort(int arr[], int left, int right){
    if (left == right)
        return;
    else {
        int mid = (left + right - 1) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}


int main() {
    int lst[] = {4,6,2,6,7,2,3,4,6,2,3};
    merge_sort(lst, 0, 10);
    for (int n: lst){
        cout << n << endl;
    }
    return 0;
}
