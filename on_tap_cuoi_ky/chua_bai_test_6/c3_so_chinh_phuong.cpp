#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sevenCnt = 0;
    for (int i = (n - 1); i > -1; i--) {
        if (arr[i] == 7) {
            cout << i << " ";
            sevenCnt++;
        }
    }
    
    if (sevenCnt == 0) {
        cout << "Not found";
    }
    return 0;
}