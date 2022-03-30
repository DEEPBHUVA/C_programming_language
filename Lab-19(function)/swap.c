#include<stdio.h>

void swap(int,int);
void main()
{
	int a,b;
	printf("Enter first num:\n");
	scanf("%d",&a);
	printf("Enter second num:\n");
	scanf("%d",&b);
	swap(a,b);
}

void swap(int a, int b)
{
	int sum;
	sum=a+b;
	a=sum-a;
	b=sum-b;
	printf("ANSWER:%d\n",a);
	printf("ANSWER:%d\n",b);
}