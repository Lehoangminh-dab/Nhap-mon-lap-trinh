#include<iostream>
using namespace std;
void bai_tap_2_lab_06() {
/*
1) cal_sum_of_even_elements_
2) cal num_of_odd_elements__
3) find_repeating_elements
4) reverse_array
5) sort_even_elements_to_the_beginning_and_
6) eliminate_numbers_divisible_by_3_from_the_array
*/

}
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
