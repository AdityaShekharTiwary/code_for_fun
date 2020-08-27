#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    float rp=0,rn=0,rz=0;
    int arr[300];
    int p=0,ne=0,z=0,n;

    cin >> n;

     for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

     for(int i=0;i<n;i++)
       {
       if (arr[i]>0)
        p++;
       else if (arr[i] < 0)
        ne++;
       else if (arr[i] == 0)
        z++;
       }

    rp =(float)p/n;
    rn = (float)ne/n;
    rz = (float)z/n;


    printf("%.6f\n", rp);
    printf("%.6f\n", rn);
    printf("%.6f\n", rz);





    return 0;
}
