#include <iostream>

using namespace std;

int main(){
    //ex5.3
    int sum = 0;
    for (int val = 1; val <= 10; sum += val++);
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;

    return 0;
}