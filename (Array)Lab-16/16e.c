#include<stdio.h>
void main()
{
	int i,j,stu[5],sub[3];
	float avg,sum=0;
	for(i=0;i<5;i++)
	{
		printf("Student:%d\n",i+1);
		for(j=0;j<3;j++)
		{
			printf("Marks of subject %d:",j+1);
			scanf("%d",&sub[j]);
			sum=sum+sub[j];
		}
		printf("sum=%.2f\n",sum);
		printf("avg=%.2f\n",(sum/3));
		sum=0;
	}
}