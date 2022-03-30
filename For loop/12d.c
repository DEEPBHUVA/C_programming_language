#include<stdio.h>

void main()
{
    int n,i,last,ltd,sum=0;
    printf("Enter number for cheak palindroame number or not:\n");
    scanf("%d",&n);
    ltd=n;
    for( ;n!=0; )
    {
        last=n%10;
        sum=sum*10+last;
        n=n/10;
    }
    if(sum==ltd)
        printf("%d is palindroame number",ltd);
    else
        printf("%d is not palindroame number",ltd);
}