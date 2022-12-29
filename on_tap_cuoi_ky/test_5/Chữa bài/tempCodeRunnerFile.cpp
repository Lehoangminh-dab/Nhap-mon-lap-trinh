#include <iostream>
#include <iomanip>
using namespace std;
void sortAscending(int *arr, int eleCnt) {
    int i = eleCnt - 1;
    while(i > -1) {
        int unsortedMax = arr[i];
        int iUnsortedMax = i;
        for (int j = i; j > -1; j--) {
            if (arr[j] > unsortedMax) {
                unsortedMax = arr[j];
                iUnsortedMax = j;
            }
        }
        //swap position
        int temp = arr[iUnsortedMax];
        arr[iUnsortedMax] = arr[i];
        arr[i] = temp;
        //move on to next position
        i--;
    }
}

double findMedian(int *arr, int len) {
    double median;
    // len is even
    if (len % 2 == 0) {
        median = double(arr[(len / 2) - 1] + arr[(len / 2)]) / 2;
    }
    // len is odd
    else {
        median = arr[(len - 1) / 2];
    }
    return median;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sortAscending(arr, n);
    double median = findMedian(arr, n);
    cout << fixed << setprecision(1);
    cout << median;
    return 0;
}