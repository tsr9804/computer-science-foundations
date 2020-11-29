#include<iostream>
using namespace std;

int binary_search(int search_value, int lst[], int elements){
    int start = 0;
    int end = elements-1;
    int mid;

    int count = 0;
    while (start <= end) {
        count++;
        mid = (start + end) / 2;
        if (lst[mid] == search_value)
            break;
        else {
            if (search_value < lst[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    return count;
}


int main() {
    int lst[] = {0, 1, 2};
    cout << binary_search(4, lst, 3) << endl;
    return 0;
}
