#include<stdio.h>
struct student_record
{
	char name[20];
	char branch[20];
	int  marks;
}s[10];
void main()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("Student %d\n",i+1);
		printf("Name:");
		scanf("%s",s[i].name);
		printf("Branch:");
		scanf("%s",s[i].branch);
		printf("Marks:");
		scanf("%d",&s[i].marks);
	}
	for(i=0;i<10;i++)
	{
		printf("Student %d\n",i+1);
		printf("Name: %s\n",s[i].name);
		printf("Branch: %s\n",s[i].branch);
		printf("Marks: %d\n",s[i].marks);
	}
	
}