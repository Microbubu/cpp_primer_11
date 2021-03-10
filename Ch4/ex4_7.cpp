#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    //ex4.21
	vector<int> ivec{ 1,2,3,4,5 };
	for (auto& ival : ivec) {
		ival = ival % 2 == 0 ? ival : ival * 2;
	};
	for (const auto& ival : ivec) {
		cout << ival << " ";
	}
	cout << endl;

	//ex4.22
	vector<int> scores{ 45, 66, 80, 98 };
	for (const auto& score : scores) {
		cout << score << ":" << (score < 60 ? "fail" :
			score < 75 ? "low pass" :
			score < 90 ? "pass" : "high pass")
			<< endl;
	}

	for (const auto& score : scores) {
		cout << score << ":";
		if (score < 60) cout << "fail" << endl;
		else if (score < 75) cout << "low pass" << endl;
		else if (score < 90) cout << "pass" << endl;
		else cout << "high pass" << endl;
	}

	//ex4.23
	string s = "word";
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
	cout << p1 << endl;
    return 0;
}