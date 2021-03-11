#include <iostream>
#include <string>

using namespace std;

int main(){
    //4.36
	int i = 10;
	double d = 3.14;
	i *= static_cast<int>(d);
	cout << i << endl;

	//4.37
	const string str("Hello");
	char c = 'c';
	const string* ps = &str;
	char* pc = &c;
	void* pv;
	pv = static_cast<void*>(const_cast<string*>(ps));
	i = static_cast<int>(*pc);
	pv = static_cast<void*>(&d);
	pc = static_cast<char*>(pv);

    return 0;
}