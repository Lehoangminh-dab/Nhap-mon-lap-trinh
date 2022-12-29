#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int oddCnt = 0;
    int sumOfOdds = 0;

    int evenCnt = 0;
    int sumOfEvens = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCnt++;
            sumOfEvens += arr[i];
        }
        else {
            oddCnt++;
            sumOfOdds += arr[i];
        }
    }

    if (evenCnt == 0) {
        cout << "None" << endl;
    } 
    else {
        cout << sumOfEvens << endl;
    }

    if (oddCnt == 0) {
        cout << "None" << endl;
    }
    else {
        cout << sumOfOdds << endl;
    }
    return 0;
}