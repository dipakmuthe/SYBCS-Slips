/*Q1. Create a random array of n integers. Accept a value x from user and use 
 linear search algorithm to check whether the number is present in the 
 array or not and output the position if the number is present. [10]*/

#include<stdio.h>
int main()
{
    int a[100],i,n,x,flag=0;
    printf("Enter the limit :");
    scanf("%d",&n);

    printf("Enter %d Number :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter Number to search:");
     scanf("%d",&x);

     for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\n Number is found at position %d",i);
    else
    printf("\n Number is not found.......");
}
