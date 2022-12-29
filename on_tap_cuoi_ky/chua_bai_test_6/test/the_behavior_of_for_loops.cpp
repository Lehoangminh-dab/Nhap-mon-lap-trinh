#include <iostream>
using namespace std;
int main() {
    // Khong co dau bang
    cout << "Khong co dau bang" << endl;
    for (int i = 0; i < 0; i++) {
        cout << "an cut" << endl;
        cout << i << endl;
    }
    // Co dau bang
    cout << "Co dau bang" << endl;
    for (int i = 0; i <= 0; i++) {
        cout << "an cut" << endl;
        cout << i << endl;
    }
    return 0;
}