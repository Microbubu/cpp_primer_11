#include <iostream>
#include <vector>

using namespace std;

int main(){
    //ex4.28
	cout << "size of unsigned short: " << sizeof(unsigned short) << endl;
	cout << "size of short: " << sizeof(short) << endl;
	cout << "size of unsigned char: " << sizeof(unsigned char) << endl;
	cout << "size of char: " << sizeof(char) << endl;
	cout << "size of unsigned int: " << sizeof(unsigned int) << endl;
	cout << "size of int: " << sizeof(int) << endl;
	cout << "size of unsigned long: " << sizeof(unsigned long) << endl;
	cout << "size of long: " << sizeof(long) << endl;
	cout << "size of unsigned long long: " << sizeof(unsigned long long) << endl;
	cout << "size of long long: " << sizeof(long long) << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of long float: " << sizeof(long float) << endl;
	cout << "size of double: " << sizeof(double) << endl;
	cout << "size of long double: " << sizeof(long double) << endl;
	cout << "size of pointer: " << sizeof(int*) << endl;

	//4.29
	int x[10]; int* p = x;
	cout << sizeof(x) / sizeof(*x) << endl;	//10 * sizeof(int) / sizeof(int) = 10
	cout << sizeof(p) / sizeof(*p) << endl;	//sizeof(int*) / sizeof(int)

    return 0;
}