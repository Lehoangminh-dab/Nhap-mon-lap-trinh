#include <iostream>
using namespace std;
struct Date {
    int day, month, year;
};

Date extractDate(string sDate) {
    Date date;
    string sDay = "";
    string sMonth = "";
    string sYear = "";

    int dashCount = 0;
    for (int i = 0; i < sDate.length(); i++) {
        if (sYear[i] != '/' && dashCount == 0) {
            sDay += sDate[i];
        }
        else if (sDate[i] != '/' && dashCount == 1) {
            sMonth += sDate[i];
        }
        else if (sDate[i] != '/' && dashCount == 2) {
            sYear += sDate[i];
        }
        else {
            dashCount++;
        }
    }
    //convert sDate values into int
    date.day = stoi(sDay);
    date.month = stoi(sMonth);
    date.year = stoi(sYear);

    return date;
}

int main() {
    string sDate;
    cin >> sDate;
    Date date = extractDate(sDate);
    cout << "Day: " << date.day << endl;
    cout << "Month: " << date.month << endl;
    cout << "Year: " << date.year << endl;
    return 0;
}