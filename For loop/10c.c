#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    for (i=1; i<=n;i++)
    {
        if(i%2!=0)
            sum=sum+i;
        else
            sum=sum-i;
    }
    printf("your sum is=%d",sum);
}