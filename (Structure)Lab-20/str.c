	#include <stdio.h>
	struct employee
	{
	char name[100];
	char dateofjoining[100];
	float salary;
	} e[5];
	void main()
	{
	int i;
	for (i = 0; i < 5; i++)
	{
	printf("Enter employee name: ");
	scanf("%s", e[i].name);
	printf("Enter employee date of joining: ");
	scanf("%s", e[i].dateofjoining);
	printf("Enter employee's salary: ");
	scanf("%f", &e[i].salary);
	}
	printf("\nSr.\tName\tDate of Joining\tSalary\n");
	for (i = 1; i <= 5; i++)
	{
	printf("%d\t%s\t%s\t\t%f\n", i, e[i].name,
	e[i].dateofjoining, e[i].salary);
	}
	}
