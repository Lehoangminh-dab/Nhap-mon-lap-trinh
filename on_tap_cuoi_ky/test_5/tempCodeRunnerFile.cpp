#include <iostream>
using namespace std;
/*
TIÊU CHÍ:
Loại bỏ các ký tự trắng thừa 
(
đầu xâu, 
cuối xâu, 
các ký tự trắng liên tiếp chỉ giữ lại 01 ký tự trắng, 
kí tự trắng trước dấu chấm/dấu phẩy
)

Viết hoa đầu câu, 
viết thường giữa câu (các câu được ngăn cách bởi dấu chấm)
*/
int main() {
    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = (n - 1); i > - 1; i--) {
        int largestRemainder = arr[0] % k;
        int iLargestRemainder = 0;

        for (int j = 0; j <= i; j++) {
            int remainder = arr[j] % k;
            if (remainder > largestRemainder) {
                largestRemainder = remainder;
                iLargestRemainder = j;
            }
        }
        // swapping
        int temp = arr[i];
        arr[i] = arr[iLargestRemainder];
        arr[iLargestRemainder] = temp;  
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}