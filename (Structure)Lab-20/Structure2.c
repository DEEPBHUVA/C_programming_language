#include<stdio.h>

struct Person{
	char personname[20],dateofjoining[20];
	float salary;
}s[100];

void main() 
{
	int i,n;
	printf("Enter person:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter name of Person:\n");
		scanf("%s",&s[i].personname);
		
		printf("Enter date of joining:\n");
		scanf("%s",&s[i].dateofjoining);
		
		printf("Enter salary:\n");
		scanf("%f",&s[i].salary);
	}
	for(i=0;i<=n;i++)
	{
		printf("Person name %d = %s\n",i++,s[i].personname);
		printf("dateofjoining %d = %s\n",i++,s[i].dateofjoining);
		printf("salary %d = %2.f\n",i++,s[i].salary);
	}
}