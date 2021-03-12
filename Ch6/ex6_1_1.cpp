#include <iostream>
#include "chapter6.h"

using namespace std;

int main(){
    //6.6
    //6.7
    cout << params_demo(10) << endl;
    cout << params_demo(20) << endl;
    cout << params_demo(30) << endl;
    return 0;
}

int params_demo(int val) {
    static int cnt = 0;
    int newval;
    cout << val << " + 1 = ";
    cout << (newval = ++val) << endl;
    return ++cnt;
}