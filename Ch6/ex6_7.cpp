#include <iostream>
#include <vector>

using namespace std;

int sum_of(const int&, const int&);
int minus_of(const int&, const int&);
int multiply(const int&, const int&);
int devide(const int&, const int&);

int main(){
    //6.55
    //6.56
    vector<int (*)(const int&, const int&)> fvec;
    fvec.push_back(sum_of);
    fvec.push_back(minus_of);
    fvec.push_back(multiply);
    fvec.push_back(devide);
    for (const auto func : fvec) {
        cout << func(100, 10) << endl;
    }
    return 0;
}

int sum_of(const int& ival1, const int& ival2) {
    cout << "called sum." << endl;
    return ival1 + ival2;
}

int minus_of(const int& ival1, const int& ival2) {
    cout << "called minus." << endl;
    return ival1 - ival2;
}

int multiply(const int& ival1, const int& ival2) {
    cout << "called multiply." << endl;
    return ival1 * ival2;
}

int devide(const int& ival1, const int& ival2) {
    cout << "called devide." << endl;
    if (ival2 != 0)
        return ival1 / ival2;
    return 0;
}