#include <iostream>
#include "chapter6.h"

using namespace std;

int main(){
    //6.12
    int number1 = 10, number2 = 20;
    swap_by_ref(number1, number2);
    cout << "number1 = " << number1 << ", number2 = " << number2 << endl;
    return 0;
}

void swap_by_ref(int& val1, int& val2) {
    int temp = val1;
    val1 = val2;
    val2 = temp;
}