#include <iostream>
#include <math.h>
using namespace std;
double get_tax_amount(long long taxable_income) {
    
    double tax_ratio[7][2];

    tax_ratio[0][0] = 0;
    tax_ratio[0][1] = 0.05; 

    tax_ratio[1][0] = 60 * pow(10, 6);
    tax_ratio[1][1] = 0.1; 

    tax_ratio[2][0] = 120 * pow(10, 6);
    tax_ratio[2][1] = 0.15; 

    tax_ratio[3][0] = 216 * pow(10, 6);
    tax_ratio[3][1] = 0.2; 

    tax_ratio[4][0] = 384 * pow(10, 6);
    tax_ratio[4][1] = 0.25; 

    tax_ratio[5][0] = 624 * pow(10, 6);
    tax_ratio[5][1] = 0.3; 

    tax_ratio[6][0] = 960 * pow(10, 6);
    tax_ratio[6][1] = 0.35; 
    // tìm bậc thuế cao nhất của khoản tiền nhận vào
    int tax_level = 6;
    while (taxable_income - tax_ratio[tax_level][0] < 0) {
        tax_level--;
    }
    // test tax_level
    // cout << "Tax level: " << tax_level << endl;
    // tính thuế
    double tax_amount = 0;
    for (int i = tax_level; i > -1; i--) {
        tax_amount += double(double(taxable_income) - tax_ratio[i][0]) * tax_ratio[i][1];
        taxable_income = tax_ratio[i][0];
    }
    
    return tax_amount;
}
int main() {
    

    return 0;
}