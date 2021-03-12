#include <iostream>
#include "chapter6.h"

using namespace std;

int main(){
    //6.21
    int ival = 80, ival2 = 90;
    cout << bigger_number(20, &ival) << endl;
    //6.22
    int* ip1 = &ival, * ip2 = &ival2;
    cout << "ip1 location: " << ip1 << endl;
    cout << "ip2 location: " << ip2 << endl;
    swap_pointer(ip1, ip2);
    cout << "ip1 location: " << ip1 << endl;
    cout << "ip2 location: " << ip2 << endl;
    return 0;
}

int bigger_number(const int& ival, const int* ip) {
    return ival > *ip ? ival : *ip;
}

void swap_pointer(int*& ip1, int*& ip2) {
    auto temp = ip1;
    ip1 = ip2;
    ip2 = temp;
}