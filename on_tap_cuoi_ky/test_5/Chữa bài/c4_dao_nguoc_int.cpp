#include <iostream>
#include <string>
using namespace std;
int reverse_integer(int X) {
    string strX = to_string(X);
    char dau = '+';
    int i = strX.length() - 1;
    if (strX[0] == '-') {
        dau = '-';
        i--;
    }
    while (strX[i] == '0') {
        i--;
    }
    
    string str_reverse_X = "";
    if (dau == '-') {
        str_reverse_X += '-';
    }
    for (int j = i; j > -1; j--) {
        str_reverse_X += strX[j];
    }

    int rev_integer = stoi(str_reverse_X);
    return rev_integer;
}
int main() {
    int n;
    cin >> n;
    int rev_int = reverse_integer(n);
    cout << rev_int;

    return 0;
}