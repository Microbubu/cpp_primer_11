#include <iostream>

using namespace std;

void f();
void f(int);
void f(int, int);
void f(double, double);

int main(){
    //6.50
    //6.51
    //f(2.56, 42); //ambiguity
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}

void f(){
    cout << "called f();" << endl;
}
void f(int ival){
    cout << "called f(" << ival << ");" << endl;
}

void f(int ival1, int ival2){
    cout << "called f(" << ival1 << "," << ival2 << ");" << endl;
}

void f(double dval1, double dval2){
    cout << "called f(" << dval1 << "," << dval2 << ");" << endl;
}