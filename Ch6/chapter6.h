#include <string>

//6.1
int fact(int val);
int absolute(int val);

//6.1.1
int params_demo(int val);

//6.2.1
void swap(int*, int*);

//6.2.2
void swap_by_ref(int&, int&);

//6.2.3
bool contains_upper(const std::string&);
void to_lower(std::string&);

//6.2.4
int bigger_number(const int& ival, const int* ip);
void swap_pointer(int*&, int*&);

//6.2.6
int sum(std::initializer_list<int> ilist);