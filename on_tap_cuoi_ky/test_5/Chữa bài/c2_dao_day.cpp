#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    // int reverseArr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        // reverseArr[n - i - 1] = arr[i];
    }

    for (int i = n - 1; i > -1; i--) {
        cout << arr[i] << " "; //AC
    }
    return 0;
}