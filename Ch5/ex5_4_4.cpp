#include <iostream>
#include <string>

using namespace std;

int main(){
    //5.19
	string str1, str2;
	do {
		cin.clear();
        str1.clear();
        str2.clear();
		cout << "Input 2 strings: " << endl;
		cin >> str1 >> str2;
		if (!str1.empty() || !str2.empty()) {
			cout << "The shorter one is: " << (str1.size() < str2.size() ? str1 : str2) << endl;
		}
	} while (!str1.empty() || !str2.empty());
	return 0;
}