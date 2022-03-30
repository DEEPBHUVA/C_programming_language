#include<stdio.h>

void main()
{
    int i,j,n;
    printf("Enter row numbers for pattern:");
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=j; i++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}