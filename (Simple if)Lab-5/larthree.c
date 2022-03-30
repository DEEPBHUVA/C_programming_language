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
    printf("a is largest number");
}
if(b>a && b>c)
{
    printf("b is largest number");
}
if(c>a && c>b)
{
    printf("c is largest number");
}
}
