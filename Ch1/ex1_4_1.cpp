#include <iostream>

using namespace std;

int main(){
    //ex1.9
    int sum = 0, index = 50;
    while (index <= 100)
        sum += index++;
    cout << "The sum of 50 to 100 is: " << sum << endl;

    //ex1.10
    index = 10;
    while (index >= 0)
        cout << index-- << " ";
    cout << endl;

    //ex1.11
    cout << "Input two numbers:" << endl;
    int min, max;
    cin >> min >> max;
    while (++min < max)
        cout << min << " ";
    cout << endl;

    return 0;
}