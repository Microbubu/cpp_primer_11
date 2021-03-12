#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_vector(vector<string>::iterator, vector<string>::iterator);

int main(){
    //6.33
    vector<string> svec{ "hello", "world", "vector" };
    print_vector(svec.begin(), svec.end());
    return 0;
}

void print_vector(vector<string>::iterator it, vector<string>::iterator end) {
    if (it == end) return;
    cout << *it << endl;
    print_vector(++it, end);
}