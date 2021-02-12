#include<iostream>
using namespace std;


int sum(int a, int b, int c=0,int d=5)
{
return a+b+c+d;
}
int main()
{
    cout << "Sum is: " << sum(1,2);
    return 0;
}
