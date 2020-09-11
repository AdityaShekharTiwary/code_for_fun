#include<iostream>
using namespace std;
int main()
{
    int *ip;
    double *dp;
    float *fp;
    char *cp;

    int var =5;
    ip = &var;
    cout << "Variable Value: " << var << endl;
    cout << "Address of variable stored: "<< ip<< endl;
    cout << "Pointer Pointing : " << *ip <<endl;

    *ip = 6;

    cout << "Variable Value: " << var << endl;
    cout << "Address of variable stored: "<< ip<< endl;
    cout << "Pointer Pointing : " << *ip << endl;

    return 0;
}
