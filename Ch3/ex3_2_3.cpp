#include <iostream>
#include <string>

using namespace std;

int main(){
    //ex3.6
    string hello = "Hello.";
	for (auto& c : hello)
		c = 'X';
	cout << hello << endl;

    //ex3.8
	hello = "Hello";
	decltype(hello.size()) index = 0;
	while (index != hello.size())
		hello[index++] = 'X';
	cout << hello << endl;

	hello = "HelloWorld.";
	for (index = 0; index != hello.size(); ++index)
		hello[index] = 'X';
	cout << hello << endl;

    //ex3.10
	string sentence, nopunct;
	getline(cin, sentence);
	for (auto c : sentence)
		if (!ispunct(c))
			nopunct += c;
	sentence = nopunct;
	cout << sentence << endl;

    return 0;
}