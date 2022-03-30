#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 1st number:");
    scanf("%d", &a);
    printf("Enter 2nd number:");
    scanf("%d", &b);
    printf("Enter 3rd number:");
    scanf("%d", &c);

    if(a>b && a>c)
    {
        printf("1st number is largest number");
    }
    else if(b>a && b>c)
    {
        printf("2nd number is largest number");
    }
    else
    {
        printf("3rd number is largest number");
    }
}
