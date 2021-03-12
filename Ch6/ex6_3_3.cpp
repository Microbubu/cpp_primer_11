#include <iostream>
#include <string>

using namespace std;

//6.36
string (*func1())[10];

//6.37
typedef string s_type[10];
s_type *func2();

auto func2() -> string (*) [10];

string sarray[10];
decltype(sarray)* func3();

//6.38
auto arrPtr(int) -> int(&)[5];
void printArr(const int arr[], size_t size);

int main(){
    //6.38
    auto arr = arrPtr(10);
    printArr(arr, 5);
    return 0;
    return 0;
}

int odd[] = { 1, 3, 5, 7, 9 };
int even[] = { 0, 2, 4, 6, 8 };
auto arrPtr(int i) -> int(&)[5]
{
    return i % 2 ? odd : even;
}

void printArr(const int arr[], size_t size) {
    for (auto beg = arr, it = arr; it != beg + size; ++it)
        cout << *it << " ";
    cout << endl;
}