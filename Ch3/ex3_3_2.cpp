#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    //ex3.14
	vector<int> ivector;
	int number;
	while (cin >> number)
		ivector.push_back(number);
	for (const auto n : ivector)
		cout << n << " ";
	cout << endl;

    //ex3.15
	vector<string> svector;
	string str;
	while (cin >> str)
		svector.push_back(str);
	for (const auto s : svector)
		cout << s << " ";
	cout << endl;

    return 0;
}