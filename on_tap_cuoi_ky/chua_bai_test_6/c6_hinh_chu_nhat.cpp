#include <iostream>
using namespace std;
struct Rectangle {
    int id;
    float length;
    float width;
};
typedef Rectangle Rectangle;
double calPerimeter(Rectangle a) {
    double perimeter = (a.length + a.width) * 2;
    return perimeter;
}

int main() {
    int n;
    cin >> n;
    Rectangle arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].id >> arr[i].length >> arr[i].width;
    }

    double smallestPerimeter = calPerimeter(arr[0]);
    int smallestPerimeterId = arr[0].id;
    
    for (int i = 1; i < n; i++) {
        double iPerimeter = calPerimeter(arr[i]);
        int iID = arr[i].id;
        if (iPerimeter < smallestPerimeter) {
            smallestPerimeter = iPerimeter;
            smallestPerimeterId = iID;
        }
        else if (iPerimeter == smallestPerimeter && iID < smallestPerimeterId) {
            smallestPerimeterId = iID;
        }
    }

    cout << smallestPerimeterId;
    return 0;
}