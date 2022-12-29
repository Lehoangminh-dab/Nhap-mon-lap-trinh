#include <iostream>
using namespace std;
bool isAscending(int* arr, int arrLength) {
    for (int i = 0; i < arrLength - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
        else if (i == arrLength - 2) {
            return true;
        }
    }

    return false;
}

void sortArrayAscending(int* arr, int arrLength) {
    for (int i = arrLength - 1; i > -1; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortArrayDescending(int* arr, int arrLength) {
    for (int i = arrLength - 1; i > -1; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int merged_array_length = lenArr1 + lenArr2;
    int* merged_array = new int[merged_array_length];
    for (int i = 0; i < merged_array_length; i++) {
        if (i >= lenArr1) {
            merged_array[i] = secondArr[i - lenArr1];
        }
        else {
            merged_array[i] = firstArr[i];
        }
    }

    if (isAscending(firstArr, lenArr1) == true) {
        sortArrayAscending(merged_array, merged_array_length);
    }
    else {
        sortArrayDescending(merged_array, merged_array_length);
    }
    return merged_array;
}

int main() {

    return 0;
}