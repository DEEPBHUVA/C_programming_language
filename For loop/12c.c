#include<stdio.h>

void main()
{
    int n,i,last,sum=0;
    printf("Enter number for reverse order:\n");
    scanf("%d",&n);
    for( ;n!=0; )
    {
        last=n%10;
        sum=sum*10+last;
        n=n/10;
    }
    printf("Your reverse order=%d",sum);
    
}