#include <bits/stdc++.h>
using namespace std;
string convert_decimal_to_binary(int decimal) {
    string binary = "";
    bool is_bin_len_found;
    for (int i = 31; i >= 0; i--) {
        if (decimal >= pow(2, i)) {
            binary += "1";
            decimal -= pow (2,i);
            is_bin_len_found = true;
        }
        else if (is_bin_len_found) {
            binary += "0";
        }
    }
    return binary;
}
int main() {
    int decimal;
    cin >> decimal;
    string bin = convert_decimal_to_binary(decimal);
    cout << bin;
    return 0;
}
