#include <stdio.h>
int main()
{
    int n,num,mid,right=0,left,i,c=-1,d=-1;
    scanf("%d",&n);
    scanf("%d",&num);
    int a[n];
    for(i = 1 ; i <= n ; i++ )
        scanf("%d",&a[i]);
    right = n;
    left = 1;
    while( left <= right )
    {
        mid=(right+left)/2;
        if( a[mid] > num )
        {
            right=mid-1;
        }
        else if( a[mid] == num )
        {
            d=mid;
            left=mid+1;
        }
        else
        {
            left=mid+1;
        }
    }


right = n;
    left = 1;


    while( left <= right )
    {
        mid=(right+left)/2;
        if( a[mid] > num )
        {
            right=mid-1;
        }
        else if( a[mid] == num )
        {
            c=mid;
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
     if(c==-1)
        printf("number not found\n");
     else
    printf("the number found %d times\n",(d-c)+1);
}



