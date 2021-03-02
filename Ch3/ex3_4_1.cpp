#include <iostream>
#include <vector>

using namespace std;
template<typename T>
void printVector(vector<T> v);

int main(){
    //ex3.21
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

    //ex3.22
    vector<string> text;
	text.push_back("I have a dream.");
	text.push_back("");
	text.push_back("One day...");
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
		for (auto& c : *it)
			c = toupper(c);
	printVector(text);

    //ex3.23
	vector<int> ivector(10);
	for (unsigned index = 0; index < ivector.size(); index++)
		ivector[index] = index + 1;
	printVector(ivector);
	for (auto it = ivector.begin(); it != ivector.end(); ++it)
		*it *= 2;
	printVector(ivector);

    return 0;
}

template<typename T>
void printVector(vector<T> v) {
	for (auto it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
	cout << endl;
}