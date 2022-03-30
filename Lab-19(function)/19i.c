#include<stdio.h>
void fact(int);

void main()
{
	int n;
	printf("Enter number for factorial:");
	scanf("%d",&n);
	fact(n);
}

void fact(int n)
{
	int sum=1,i;
	for (i=0; i <=n; i++)
	{
		sum=sum*i;
	}
	printf("ANSWER= %d",sum);
}
