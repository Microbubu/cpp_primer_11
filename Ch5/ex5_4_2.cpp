#include <iostream>
#include <vector>

using namespace std;

int main(){
    //5.17
	vector<int> ivec1;
	vector<int> ivec2;
	cout << "Input ivec1: " << endl;
	int ival;
	while (cin >> ival) {
		ivec1.push_back(ival);
	}
	cin.clear();
	cout << "Input ivec2: " << endl;
	while (cin >> ival) {
		ivec2.push_back(ival);
	}
	const vector<int>& shortVec = ivec1.size() < ivec2.size() ? ivec1 : ivec2;
	const vector<int>& longVec = shortVec == ivec1 ? ivec2 : ivec1;
	bool isPrefix = true;
	for (decltype(ivec1.size()) index = 0; index != shortVec.size(); ++index) {
		if (shortVec[index] != longVec[index])
			isPrefix = false;
	}
	cout << (isPrefix ? "true" : "false") << endl;
	return 0;
}