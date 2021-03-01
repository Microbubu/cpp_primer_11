#include <iostream>

using namespace std;

int main(){
    int number, sum = 0;
    while (cin >> number)
        sum += number;
    cout << "The sum is: " << sum << endl;
    return 0;
}