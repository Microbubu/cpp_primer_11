#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t, const string&, const string & = "s");

int main(){
    //6.42
    cout << make_plural(1, "success") << endl;
    cout << make_plural(2, "success", "es") << endl;
    cout << make_plural(1, "failure") << endl;
    cout << make_plural(2, "failure") << endl;
    return 0;
}

string make_plural(size_t ctr, const string& word, const string& ending) {
    return (ctr > 1) ? word + ending : word;
}