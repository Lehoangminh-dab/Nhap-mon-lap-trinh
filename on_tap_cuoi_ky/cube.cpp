#include <iostream>
using namespace std;
void cube(double *p) {
    double pValue = *p;
    double cube_volume = pValue * pValue * pValue;
    *p = cube_volume;
}

int main() {
    

    return 0;
}