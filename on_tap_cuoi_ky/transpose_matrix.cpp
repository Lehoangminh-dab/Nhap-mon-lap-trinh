#include <iostream>
using namespace std;
int **transpose(int **matrix, int m, int n) {
    int** transposeMatrix = new int*[n];
    for (int i = 0; i < n; i++) {
        transposeMatrix[i] = new int[m];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
    
    return transposeMatrix;
}

int main() {
    

    return 0;
}