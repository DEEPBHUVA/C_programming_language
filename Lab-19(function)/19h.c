#include<stdio.h>
void fibbo(int);

void main()
{
	int n;
	printf("Enter number for fibonacci series:");
	scanf("%d",&n);
	fibbo(n);
}

void fibbo(int n)
{
	int f=0,l=1,sum,i;
	for (i=0; i<=n; i++)
	{
		if (i<=1)
		{
			sum=i;
		}
		else
		{
			sum=f+l;
			f=l;
			l=sum;
		}
		printf("%d ",sum);
	}
}