#include <iostream>
#include <string>

using namespace std;

int main(){
    //5.20
	string input, last;
	while (cin >> input && !input.empty()) {
		if (input == last) {
			cout << input << " occurs 2 times." << endl;
			break;
		}
		last = input;
	}
	if (input != last) {
		cout << "No words occurs 2 times." << endl;
	}

	//5.21
	while (cin >> input && !input.empty()) {
		if (input == last) {
			if (!isupper(input[0])) continue;
			cout << input << " occurs 2 times." << endl;
			break;
		}
		last = input;
	}
	if (input != last) {
		cout << "No words occurs 2 times." << endl;
	}
	return 0;
}