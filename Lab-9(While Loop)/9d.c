#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter number a:\n");
    scanf("%d",&a);
    printf("Enter number b:\n");
    scanf("%d",&b);
    while(a<=b)
    {
        if(a%2==0 && b%3!=0)
            printf("%d\n",a);
        a++;
    }
}