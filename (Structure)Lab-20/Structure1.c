#include<stdio.h>

struct Book{
	char title[20],author[20],publication[20];
	float price;
}s[100];

void main()
{
	int i,n;
	printf("Enter number:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Title\n");
		scanf("%s",&s[i].title);
		
		printf("author\n");
		scanf("%s",&s[i].author);
		
		printf("publication\n");
		scanf("%s",&s[i].publication);
		
		printf("price\n");
		scanf("%f",&s[i].price);
	}
	for(i=0;i<=n;i++)
	{
		printf("Title %d= %s\n",i+1,s[i].title);
		printf("author %d= %s\n",i+1,s[i].author);
		printf("publication %d= %s\n",i+1,s[i].publication);
		printf("price %d= %f\n",i+1,s[i].price);
	}
}