#include<stdio.h>
struct time
{
	int h;
	int m;
	int s;
}p[3];
void main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Member %d\n",i+1);
		scanf("%d\n",&p[i].h);
		scanf("%d\n",&p[i].m);
		scanf("%d\n",&p[i].s);
	}
	for(i=0;i<3;i++)
	{
		printf("Member %d\n",i+1);
		printf("%d:%d:%d\n",p[i].h,p[i].m,p[i].s);
	}
}