#include<stdio.h>

void maxmin(int,int);
void main()
{
    int a,b;
    printf("Enter first num:\n");
    scanf("%d",&a);
    printf("Enter second num:\n");
    scanf("%d",&b);
    maxmin(a,b);
}
void maxmin(int a, int b)
{
    int x;
    x=(a > b ? a : b);
    printf("Answer:%d",x);
}
