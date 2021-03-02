#include <iostream>
#include <vector>

using namespace std;

int main(){
    //ex3.31
    int iarray[10] = { 0 };
	for (unsigned index = 0; index < 10; index++)
		iarray[index] = index;
	for (unsigned index = 0; index < 10; ++index)
		cout << iarray[index] << " ";
	cout << endl;

    //ex3.32
	int iarray1[10];
	for (unsigned index = 0; index < 10; index++)
		iarray1[index] = iarray[index];

	vector<int> ivector(10);
	int index = 0;
	for (auto& n : ivector)
		n = index++;
	for (auto n : ivector)
		cout << n << " ";
	cout << endl;

    return 0;
}