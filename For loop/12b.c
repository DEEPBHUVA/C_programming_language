#include<stdio.h>

void main()
{
    int n,i,last,sum=0;
    printf("Enter number:\n");
    scanf("%d",&n);
    for( ;n!=0; )
    {
        last=n%10;
        sum=sum+last;
        n=n/10;
    }
    printf("Your sum of digits=%d",sum);
}