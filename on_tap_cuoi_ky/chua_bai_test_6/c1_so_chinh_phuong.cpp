#include <iostream>
#include <math.h>
using namespace std;
bool isSoChinhPhuong (long long n) {
    if (n <= 0) {
        return false;
    }
    double root = sqrt(n);
    if (int(root) == root) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    long long n;
    cin >> n;
    bool isChinhPhuong = isSoChinhPhuong(n);
    if (isChinhPhuong) {
        cout << "co";
    }
    else {
        cout << "khong";
    }
    return 0;
}