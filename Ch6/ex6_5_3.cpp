#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_vector(const vector<string>&, vector<string>::iterator);

int main(){
    //6.47
    vector<string> svec { "hello", "world" };
    print_vector(svec, svec.begin());
    return 0;
}

void print_vector(const vector<string>& svec, vector<string>::iterator it){
    if (it == svec.end()) return;
    cout << *it << endl;
#ifndef NDEBUG
    cout << "vector size: " << svec.size() << endl;
#endif
    print_vector(svec, ++it);
}