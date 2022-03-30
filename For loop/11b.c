#include<stdio.h>
void main()
{
    int n,i,sum=1;
    printf("Enter n number for Fectorial:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum*i;
    }
    printf("Answer=%d",sum);
}