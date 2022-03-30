#include<stdio.h>

void main()
{
    int i,j,n1,n2,x;
    printf("Enter n1 for colume:");
    scanf("%d",&n1);
    printf("Enter n2 for row:");
    scanf("%d",&n2);

    for(i=1; i<=n1; i++)
    {
        for(j=1; j<=n2; j++)
        {
            x=i*j;
            printf(" %d ",x);
        }
        printf("\n");
    }

}