#include <iostream>
#include <string>
using namespace std;
string cong_hai_so(string a, string b) {
    string tong = "";
    while (a.length() > b.length()) {
        b = '0' + b;
    }
    while (b.length() > a.length()) {
        a = '0' + a;
    }

    int nho = 0;
    for (int i = a.length() - 1; i > -1; i--) {
        int xA = a[i] - 48;
        int xB = b[i] - 48;
        int x = xA + xB + nho;
        nho = x / 10;
        x = x - (10 * nho);
        char cX = char(x + 48);
        tong = cX + tong;
    }
    
    // AC
    if (nho > 0) {
        tong = '1' + tong;
    }
    return tong;
}
int main() {
    string a, b;
    cin >> a >> b;
    string tong = cong_hai_so(a, b);
    cout << tong << endl;
    return 0;
}

