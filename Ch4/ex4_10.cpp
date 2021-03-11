#include <iostream>
#include <vector>

using namespace std;

int main(){
    //ex4.31
	vector<int> ivec(32);
	auto cnt = ivec.size();
	for (decltype(cnt) ix = 0; ix != ivec.size();)
		ivec[ix++] = cnt--;
	for (const auto& val : ivec)
		cout << val << " ";
	cout << endl;
    
    return 0;
}