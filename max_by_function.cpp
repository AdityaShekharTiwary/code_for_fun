#include<iostream>
using namespace std;

int maximun(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
    return a;
    else if (b>c && b>d)
    return b;
    else if (c>d)
    return c;
    else
    return d;

}


int main()
{
    int a,b,c,d;
    cout << "Enter  four numbers to find the greatest" << endl;
    cin >> a >> b >> c >> d;
    int x = maximun(a,b,c,d );
    cout << "greatest value is:" << x << endl;

    return 0;
}

