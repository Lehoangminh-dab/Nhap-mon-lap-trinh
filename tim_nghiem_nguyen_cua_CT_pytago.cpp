#include <bits/stdc++.h>
using namespace std;
void find_integer_solutions(int n, int m) {
    /*note:
    a <= b <= m;
    c <= n <= 50;
    */
    for (int c = 2; c <= n; c++) {
        for (int a = m; a <= c; a++) {
            float b = sqrt(pow(c,2) - pow(a, 2));
            if (a > int(b)) {
                break;
            }
            else if (b == int(b)) {
                cout << a << " " << b << " " << c << endl;
            }
        }
    }
}
int main() {
    int n, m;
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    while (n > 50) {
        cout << "Xin moi nhap lai n";
        cin >> n;
    }
    while (m >= n) {
        cout << "Xin moi nhap lai m be hon n";
        cin >> m;
    }
    find_integer_solutions(n, m);
    return 0;
}
