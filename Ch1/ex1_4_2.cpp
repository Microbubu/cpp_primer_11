#include <iostream>

using namespace std;

int main(){
    //ex1.13
    int sum = 0;
    for (int index = 50; index <= 100; ++index)
        sum += index;
    cout << "The sum of 50 to 100 is: " << sum << endl;

    for (int index = 10; index >= 0; --index)
        cout << index << " ";
    cout << endl;

    cout << "Input two numbers:" << endl;
    int min, max;
    cin >> min >> max;
    for (int number = min - 1; number < max; ++number)
        cout << number << " ";
    cout << endl;

    return 0;
}