#include<stdio.h>
void main()
{
	int sum=0,n,i,avg,count=0;
	printf("Enter\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg=sum/n;
	for(i=0;i<n;i++)
	{
		if(arr[i]>avg)
		count++;
	}
	printf("The number above avg=%d",count);
}