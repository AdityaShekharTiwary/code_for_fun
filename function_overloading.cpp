#include<iostream>
using namespace std;
/* void print();
   void print(int a);
   void print(floata);
   void print(int a , int b);
   void print(int a,double b);
   void print(double a, int b);
*/


int sum(int a,int b) // 1
{
    cout <<"Function 1" << endl;
    return (a+b);
}
double sum(double a, double b)// 2
{
    cout <<"Function 2" << endl;
    return (a+b);
}
double sum(int a,double b)  // 3
{
    cout <<"Function 3" << endl;
    return (a+b);
}
double sum(double a,int b)  // 4
{
    cout <<"Function 1" << endl;
    return (a+b);
}

int main()
{
    cout << sum(1,2) ; //1
    cout << sum(3.5,6.5); //2
    cout << sum(4,5.6) ; //3
    cout << sum(3.5,4) ; //4

    return 0;
}
