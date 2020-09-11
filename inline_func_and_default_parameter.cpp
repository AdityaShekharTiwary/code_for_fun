// Syntax :-  inline return_type function_name(parameter){}

#include<iostream>
using namespace std;

inline int add(int a , int b)
{
    return a+b;
}

int main()
{
    cout << "Addition of 4and 5 is: "<<add(4,5);
    return 0;
}
