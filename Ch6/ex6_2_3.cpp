#include <iostream>
#include "chapter6.h"

using namespace std;

int main(){
    //6.17
    cout << "Hello contains upper: " << (contains_upper("Hello") ? "true" : "false") << endl;
    string hello = "HELLO";
    to_lower(hello);
    cout << "lower: " << hello << endl;
    return 0;
}

bool contains_upper(const string& s) {
    for (auto const& c : s) {
        if (isupper(c)) 
            return true;
    }
    return false;
}

void to_lower(string& s) {
    for (auto& c : s) {
        c = tolower(c);
    }
}