#include <iostream>
#include <vector>

using namespace std;

int main(){
    //ex3.24
	vector<int> ivector;
	int number;
	while (cin >> number)
		ivector.push_back(number);
	auto it = ivector.begin();
	while (it < ivector.end() - 1)
		cout << *it + *(++it) << " ";
	cout << endl;

	for (auto beginIt = ivector.begin(), endIt = ivector.end();
		beginIt != ivector.end();
		++beginIt) {
		cout << *beginIt + *(--endIt) << " ";
	}
	cout << endl;

    //ex3.25
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		auto begIt = scores.begin();
		if (grade <= 100)
			*(begIt + grade / 10) += 1;
	}
    for (auto s : scores)
        cout << s << " ";
    cout << endl;

    return 0;
}