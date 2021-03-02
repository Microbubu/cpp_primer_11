#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

template<typename T>
bool vector_equals(vector<T> v1, vector<T> v2);

int main(){
    //ex3.35
    int iarray[10]={ 0 };
    for (unsigned index = 0; index < 10; index++)
        iarray[index] = index;

    for (unsigned index = 0; index < 10; index++)
        cout << iarray[index] << " ";
    cout << endl;

    for (auto p = begin(iarray); p != end(iarray); ++p)
        *p = 0;
    for (unsigned index = 0; index < 10; index++)
        cout << iarray[index] << " ";
    cout << endl;

    //ex3.36
    const unsigned cnt = 4;
    int iarray1[cnt] = { 1, 2, 3, 4 };
    int iarray2[cnt] = { 1, 2, 3, 5 };
    
    bool equals = true;
    int* pointer1 = iarray1, * pointer2 = iarray2, * endPointer = pointer1 + cnt;
    while (pointer1 != endPointer) {
        if (*pointer1++ != *pointer2++) {
            equals = false;
            break;
        }
    }
    if (equals) cout << "Array equals" << endl;
    else cout << "Array not equals" << endl;

    vector<int> ivector1(10);
    vector<int> ivector2(10);
    if (vector_equals(ivector1, ivector2))
        cout << "Vector equals" << endl;
    else cout << "Vector not equals" << endl;

    return 0;
}

template<typename T>
bool vector_equals(vector<T> v1, vector<T> v2) {
    if (v1.size() != v2.size()) return false;
    for (decltype(v1.size()) index = 0; index != v1.size(); ++index)
        if (v1.at(index) != v2.at(index)) return false;
    return true;
}