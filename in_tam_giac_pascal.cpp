#include<iostream>
using namespace std;
void print_pascal_triangle(int degree) {
    int pascal_elements[degree][degree];
    for(int line = 0; line < degree; line++) {
        for(int i = 0; i <= line; i++) {
            if(i == 0 || i == line) {
                pascal_elements[line][i] = 1;
            }
            else {
                pascal_elements[line][i] = pascal_elements[line - 1][i] + pascal_elements[line - 1][i - 1];
            }
        }
    }
    for(int line = 0; line < degree; line++) {
        for(int i = 0; i <= line; i++) {
            cout << pascal_elements[line][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int degree;
    cout << "Nhap bac cua tam giac pascal: ";
    cin >> degree;
    print_pascal_triangle(degree);
    return 0;
}
