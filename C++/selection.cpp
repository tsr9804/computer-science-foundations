#include<iostream>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(int arr[], int elements) {
    int minIdx;
    for (int i = 0; i < elements; i++){
        minIdx = i;
        for (int j = i+1; j < elements; j++){
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(&arr[i], &arr[minIdx]);
    }
}


int main() {
    int lst[] = {1,4,6,2,12,9,4};
    selection_sort(lst, 7);
    for (int n: lst){
        cout << n << endl;
    }
    return 0;
}
