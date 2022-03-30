#include<stdio.h>

void main()
{
    int i,j,n,sum=1;
    printf("Enter row numbers for pattern:");
    scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
              printf("%d\n",sum); 
              sum=sum*11;
        }
}

