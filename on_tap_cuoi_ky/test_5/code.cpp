#include <iostream>
#include <iomanip>
using namespace std;
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

    double median = findMedian(arr, n);
    cout << fixed << setprecision(1);
    cout << median;
    return 0;
}