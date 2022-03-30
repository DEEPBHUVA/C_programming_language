#include<stdio.h>

void main()
{
    int n,i,sum=0,last,ltd;
    printf("Enter number for cheak aarmstrong number or not:\n");
    scanf("%d",&n);
    ltd=n;
    for( ;n!=0; )
    {
        last=n%10;
        sum=sum+last*last*last;
        n=n/10;
    }
    if(sum==ltd)
        printf("%d is aarmstrong number",ltd);
    else
        printf("%d is not aarmstrong number",ltd);
}