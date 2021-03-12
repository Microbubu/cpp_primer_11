#include <iostream>
#include "chapter6.h"

using namespace std;

int main(){
    //6.10
    int number1 = 10, number2 = 20;
    swap(&number1, &number2);
    cout << "number1 = " << number1 << ", number2 = " << number2 << endl;
    return 0;
}

void swap(int* ip1, int* ip2) {
    int temp = *ip1;
    *ip1 = *ip2;
    *ip2 = temp;
}