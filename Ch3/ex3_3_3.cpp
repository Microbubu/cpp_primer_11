#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename T>
void printVector(vector<T> v);

int main(){
    //ex3.16
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };

    printVector(v1);
    printVector(v2);
    printVector(v3);
    printVector(v4);
    printVector(v5);
    printVector(v6);
    printVector(v7);

    //ex3.17
    vector<string> wordVector;
	string word;
	while (cin >> word)
		wordVector.push_back(word);
	for (auto& w : wordVector)
		for (auto& c : w)
			c = toupper(c);
	printVector(wordVector);

    //ex3.20
    vector<int> ivector;
	int number;
	while (cin >> number)
		ivector.push_back(number);
	for (decltype(ivector.size()) index = 0; index != ivector.size(); ++index) {
		if (index == ivector.size() - 1) break;
		cout << ivector.at(index) + ivector.at(index + 1) << " ";
	}
	cout << endl;

	for (decltype(ivector.size()) index = 0; index != ivector.size(); ++index) {
		cout << ivector.at(index) + ivector.at(ivector.size() - index - 1) << " ";
	}
	cout << endl;
    
    return 0;
}

template<typename T>
void printVector(vector<T> v){
    for (auto item : v)
        cout << item << " ";
    cout << endl;
}