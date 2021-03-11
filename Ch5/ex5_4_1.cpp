#include <iostream>
#include <string>

using namespace std;

int main(){
    //5.14
	string input, result, last;
	unsigned repeat = 0, maxRepeat = 0;
	while (cin >> input) {
		if (input == last) {
			if (maxRepeat < ++repeat) {
				result = input;
				maxRepeat = repeat + 1;
			}
		}
		else repeat = 0;
		last = input;
	}
	cout << result << " repeat " << maxRepeat << " times." << endl;
	return 0;
}