#include <iostream>
using namespace std;
void printArrow(int numberOfStars, bool left) {
    //left
    if (left == true) {
        //1st series
        for (int line = 0; line < numberOfStars; line++) {
            int stars = numberOfStars - line;
            int spaces = stars - 1;
            for (int spaceCnt = 0; spaceCnt < spaces; spaceCnt++) {
                cout << " ";
            }
            for (int starCnt = 0; starCnt < stars; starCnt++) {
                cout << "*";
            }
            cout << endl;
        }
        //2nd series
        for (int line = 0; line < numberOfStars - 1; line++) {
            int stars = line + 2;
            int spaces = stars - 1;
            for (int spaceCnt = 0; spaceCnt < spaces; spaceCnt++) {
                cout << " ";
            }
            for (int starCnt = 0; starCnt < stars; starCnt++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    //left
    if (left == false) {
        //1st series
        for (int line = 0; line < numberOfStars; line++) {
            int stars = numberOfStars - line;
            int spaces = numberOfStars - stars;
            for (int spaceCnt = 0; spaceCnt < spaces; spaceCnt++) {
                cout << "  ";
            }
            for (int starCnt = 0; starCnt < stars; starCnt++) {
                cout << "*";
            }
            cout << endl;
        }

        //2nd series
        for (int line = 0; line < numberOfStars - 1; line++) {
            int stars = line + 2;
            int spaces = numberOfStars - stars;
            for (int spaceCnt = 0; spaceCnt < spaces; spaceCnt++) {
                cout << "  ";
            }
            for (int starCnt = 0; starCnt < stars; starCnt++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}
