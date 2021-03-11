#include <iostream>
#include <string>

using namespace std;

int main(){
    //ex5.5
    string lettergrade;
    unsigned int grade;
    while (cin >> grade) {
        if (grade < 60) lettergrade = "F";
        else if (grade < 80) lettergrade = "C";
        else if (grade < 90) lettergrade = "B";
        else if (grade <= 100) lettergrade = "A";
        else lettergrade = "UNKNOWN SCORE";
        cout << lettergrade << endl;
    }

    //ex 5.6
    while (cin >> grade) {
        lettergrade = grade < 60 ? "F" :
            grade < 80 ? "C" :
            grade < 90 ? "B" :
            grade <= 100 ? "A" : "UNKNOWN SCORE";
        cout << lettergrade << endl;
    }

    return 0;
}