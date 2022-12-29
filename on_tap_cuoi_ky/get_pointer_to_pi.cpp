#include <iostream>
using namespace std;
double* getPointerToPi() {
    double pi;
    double *ptrPi = &pi;
    *ptrPi = 3.14159;
}


int main() {    

    return 0;
}