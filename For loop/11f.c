#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter number for perfect or not :\n");
    scanf("%d",&n);
    for (i = 1; i < n; i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n)
    printf("Number is perfect");
    else
    printf("Number is not perfect");
}
