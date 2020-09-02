#include<iostream>
using namespace std;
int main()
{
    long int arr[10000],n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] * arr[i];
        cout << arr[i] << " " ;
    }

    return 0;
}
