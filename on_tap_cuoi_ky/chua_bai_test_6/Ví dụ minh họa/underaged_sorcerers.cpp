#include <iostream>
using namespace std;
// Phù thủy Hogwarts
void housesOfHogwarts(const char* path) {
    ifstream file(path);
    string sLengthOfArray;
    getline(file, sLengthOfArray);
    int lengthOfArray = stoi(sLengthOfArray);

    string names[lengthOfArray];
    int nameCnt = 0;
    while (!file.eof()) {
        string name;
        getline(file, name);
        if (file) {
            names[nameCnt] = name;
            nameCnt++;
        }
        else {
            cout << "Error while reading file occured";
            break;
        }
    }
    for (int i = 0; i < lengthOfArray; i++) {
        cout << names[i] << endl;
    }
}

int main() {
    

    return 0;
}