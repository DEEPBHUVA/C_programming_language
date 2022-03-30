#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter number for fector:\n");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		if (n%i==0)
		printf("fectors=%d\n",i);
	}
}