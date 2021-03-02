#include <iostream>
#include <string>

using namespace std;

int main(){
    //ex3.2
    string line;
    while (getline(cin, line)){
        if (line.empty()) break;
        cout << line << endl;
    }
    
    string word;
    while (cin >> word && !word.empty())
        cout << word << endl;
    
    //ex3.4
	string word1, word2;
	cin >> word1 >> word2;
	word = word1;
	if (max < word2) word = word2;
	cout << "The larger string is " << word << endl;

	cin >> word1 >> word2;
	word = word1;
	if (word1.size() < word2.size()) word = word2;
	cout << "The longer string is " << word << endl;

    //ex3.5
	string join;
	while (cin >> word)
		join += word;
	cout << join << endl;

	join.clear();
    word.clear();
	while (cin >> word)
		join += " " + word;
	cout << join << endl;

    return 0;
}