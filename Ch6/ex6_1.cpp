#include <iostream>
#include "chapter6.h"

using namespace std;

int main(){
    //6.4
    cout << "Enter a number: " << endl;
    int number;
    cin >> number;
    if (number > 0) {
        cout << number << "! = " << fact(number) << endl;
    }

    //6.5
    cout << "Enter a number: " << endl;
    cin >> number;
    cout << "|" << number << "| = " << absolute(number) << endl;
    return 0;
}

int fact(int val) {
    int fact = 1;
    while (val > 1) {
        fact *= val--;
    }
    return fact;
}

int absolute(int val) {
    return val > 0 ? val : -val;
}