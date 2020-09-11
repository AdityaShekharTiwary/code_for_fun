//  DMA allows to set array size dynamically during runtime
//  rather than compile time.

#include<iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;

    cout << "Enter number of values you want to store"<<endl;
    cin >> size;
    cout<< "Enter values to be stored" << endl;
    ptr = new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<< "Values in the array are: " << endl;
    for(int i=0;i<size;i++)
    {
        cout <<ptr[i] << endl;
    }
    return 0;
}
