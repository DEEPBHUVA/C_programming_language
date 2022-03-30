#include<stdio.h>
void main()
{
	int i,j,hig[5],wig[5],per[5],wig1=0,hig1=0;
	for(i=0;i<5;i++)
	{
		printf("Person:%d\n",i+1);
		for(j=i;j<=i;j++)
		{
			printf("Height %d:",j+1);
			scanf("%d",&hig[j]);
			printf("Weight %d:",j+1);
			scanf("%d",&wig[j]);
			if(hig[j]>170)
				hig1++;
			if(wig[j]<50)
				wig1++;
		}
	}
	printf("Height>170=%d\n Weight<50=%d",hig1,wig1);
}