#include<iostream>
#include<random>
using namespace std;
void insertArrayElements(int arr[], int arrayLength) {
    for (int i = 0; i < arrayLength; i++) {
        cin >> arr[i];
    }
}
void insertArrayElement(int arr[], int &eleCnt, int newElement, int newElementPos) {
    int iNewElement = newElementPos - 1;
    //move elements to the right
    for (int i = eleCnt; i > iNewElement; i--) {
        arr[i] = arr[i - 1];
    }
    arr[iNewElement] = newElement;
    eleCnt++;
}
void removeArrayElement(int arr[], int &eleCnt, int elementPos) {
    int iElement = elementPos - 1;
    //move elements to the left, overiding the element to be deleted
    for (int i = iElement; i < eleCnt; i++) {   //this will give the excess element at the end a random value

        arr[i] = arr[i+1];
    }
    eleCnt--;
}
void printArray(int arr[], int eleCnt) {
    for (int i = 0; i < eleCnt; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sortAscending(int arr[], int eleCnt) {
    int i = eleCnt - 1;
    while(i > -1) {
        int unsortedMax = arr[i];
        int iUnsortedMax = i;
        for (int j = i; j > -1; j--) {
            if (arr[j] > unsortedMax) {
                unsortedMax = arr[j];
                iUnsortedMax = j;
            }
        }
        //swap position
        int temp = arr[iUnsortedMax];
        arr[iUnsortedMax] = arr[i];
        arr[i] = temp;
        //move on to next position
        i--;
    }
}
void sortDescending(int arr[], int eleCnt) {
    int i = eleCnt - 1;
    while(i > -1) {
        int unsortedMax = arr[i];
        int iUnsortedMax = i;
        for (int j = i; j > -1; j--) {
            if (arr[j] < unsortedMax) {
                unsortedMax = arr[j];
                iUnsortedMax = j;
            }
        }
        //swap position
        int temp = arr[iUnsortedMax];
        arr[iUnsortedMax] = arr[i];
        arr[i] = temp;
        //move on to next position
        i--;
    }
}

int main() {
    int lengthOfArray;
    cout << "Please enter length of the random array: ";
    cin >> lengthOfArray;
    int arr[lengthOfArray + 100];
    int eleCnt = 0;
    for (int i = 0; i < lengthOfArray; i++) {
        arr[i] = rand() % 100;
        eleCnt++;
    }
    //sorting the array
    sortAscending(arr, eleCnt);
    cout << "The ascending array is:" << endl;
    printArray(arr, eleCnt);
    sortDescending(arr, eleCnt);
    cout << "The descending array is:" << endl;
    printArray(arr, eleCnt);
    //removing an element
    cout << "Enter element position to be removed: ";
    int elementPos;
    cin >> elementPos;
    removeArrayElement(arr, eleCnt, elementPos);
    cout << "New array after removing element: " << endl;
    printArray(arr, eleCnt);
    //insert an element
    cout << "Enter element to insert: ";
    int newElement;
    cin >> newElement;
    cout << "Enter position: ";
    int newElementPos;
    cin >> newElementPos;
    insertArrayElement(arr, eleCnt, newElement, newElementPos);
    cout << "New array after inserting element: " << endl;
    printArray(arr, eleCnt);
    return 0;
}
