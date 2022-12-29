#include <iostream>
using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;

    int nho = 0;
    for (int i = a.length() - 1; i > -1; i--) {
        // nhẩm chữ số đầu tiên
        if (i == 0) {
            int iChuSoMoi = a[i] - 48;
            iChuSoMoi += nho;
            iChuSoMoi *= b;
            nho = iChuSoMoi / 10;
            iChuSoMoi -= (10 * nho);
            char chuSoMoi = char(iChuSoMoi + 48);
            a[i] = chuSoMoi;

            // thêm một hàng chữ số mới nếu vẫn còn nhỡ

            if (nho > 0) {
                a = "0" + a;
                int iHangMoi = a[0] - 48;
                iHangMoi += nho;
                char hangMoi = char(iHangMoi + 48);
                a[0] = hangMoi;
            }
        }
        // nhẩm các chữ số còn lại
        else {
            int iChuSoMoi = a[i] - 48;
            iChuSoMoi += nho;
            iChuSoMoi *= b;
            nho = iChuSoMoi / 10;
            iChuSoMoi -= (10 * nho);
            char chuSoMoi = char(iChuSoMoi + 48);
            a[i] = chuSoMoi;
        }
    }
    
    return 0;
}