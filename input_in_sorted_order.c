#include <stdio.h>

void main()
{
    int arr[100],i,n,x,val;
    printf("Input the size of array : ");
    scanf("%d", &n);
    printf("Enter %d elements in ascending order:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be inserted : ");
    scanf("%d",&val);
    printf("The original array is :\n ");
    for(i=0;i<n;i++)
    {
      printf("% 5d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(val<arr[i])
        {
           x = i;
           break;
        }
    }


    for(i=n;i>=x;i--)
      arr[i]= arr[i-1];

      arr[x]=val;

      printf("\nThe updated array is :\n ");
    for(i=0;i<=n;i++)
    {
       printf("% 5d",arr[i]);
    }
}
