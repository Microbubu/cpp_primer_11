#include <iostream>

using namespace std;

int main(){
    //ex4.10
	int number;
	while (cin >> number && number != 42)
		cout << "Your input:" << number << endl;
    return 0;
}