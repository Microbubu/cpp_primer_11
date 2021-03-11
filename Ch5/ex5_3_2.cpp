#include <iostream>
#include <string>

using namespace std;

int main(){
    //ex5.9
	string input;
	getline(cin, input);
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	for (const auto& c : input) {
		if (c == 'a') ++aCnt;
		else if (c == 'e') ++eCnt;
		else if (c == 'i') ++iCnt;
		else if (c == 'o') ++oCnt;
		else if (c == 'u') ++uCnt;
	}
	cout << "Number of vowel a: " << aCnt << "\n"
		 << "Number of vowel e: " << eCnt << "\n"
		 << "Number of vowel i: " << iCnt << "\n"
		 << "Number of vowel o: " << oCnt << "\n"
		 << "Number of vowel u: " << uCnt << endl;

	//ex5.10
	aCnt = eCnt = iCnt = oCnt = uCnt = 0;
	getline(cin, input);
	for (const auto& c : input) {
		switch (c)
		{
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'e':
			case 'E':
				++eCnt;
				break;
			case 'i':
			case 'I':
				++iCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
				++uCnt;
				break;
			default:
				break;
		}
	}
	cout << "Number of vowel a/A: " << aCnt << "\n"
		 << "Number of vowel e/E: " << eCnt << "\n"
		 << "Number of vowel i/I: " << iCnt << "\n"
		 << "Number of vowel o/O: " << oCnt << "\n"
		 << "Number of vowel u/U: " << uCnt << endl;

	//5.11
	aCnt = eCnt = iCnt = oCnt = uCnt = 0;
	unsigned blankCnt = 0, tabCnt = 0, lineCnt = 0;
	for (const auto& c : input) {
		if (c == 'a' || c == 'A') ++aCnt;
		else if (c == 'e' || c == 'E') ++eCnt;
		else if (c == 'i' || c == 'I') ++iCnt;
		else if (c == 'o' || c == 'O') ++oCnt;
		else if (c == 'u' || c == 'U') ++uCnt;
		else if (c == ' ') ++blankCnt;
		else if (c == '\t') ++tabCnt;
		else if (c == '\n') ++lineCnt;
	}
	cout << "Number of vowel a/A: " << aCnt << "\n"
		 << "Number of vowel e/E: " << eCnt << "\n"
		 << "Number of vowel i/I: " << iCnt << "\n"
		 << "Number of vowel o/O: " << oCnt << "\n"
		 << "Number of vowel u/U: " << uCnt << "\n"
		 << "Number of blank: " << blankCnt << "\n"
		 << "Number of tab: " << tabCnt << "\n"
		 << "Number of line: " << lineCnt << endl;

	//5.12
	getline(cin, input);
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
	for (decltype(input.size()) idx = 0; idx != input.size() - 1; ++idx) {
		if (input[idx] == 'f') {
			char nextChar = input[idx + 1];
			switch (nextChar)
			{
				case 'f':
					++ffCnt;
					break;
				case 'l':
					++flCnt;
					break;
				case 'i':
					++fiCnt;
					break;
				default:
					break;
			}
		}
	}
	cout << "Number of ff: " << ffCnt << "\n"
		 << "Number of fl: " << flCnt << "\n"
		 << "Number of fi: " << fiCnt << endl;

    return 0;
}