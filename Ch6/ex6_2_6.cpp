#include <iostream>
#include "chapter6.h"

using namespace std;

int main(){
    //6.27
    cout << "Sum of 1, 2, 3, 4, 5 is " << sum({ 1,2,3,4,5 }) << endl;
    return 0;
}

int sum(initializer_list<int> ilist) {
    int sum = 0;
    for (const auto& ival : ilist) {
        sum += ival;
    }
    return sum;
}