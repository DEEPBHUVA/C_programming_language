#include<stdio.h>

void main()
{
    int r,c,n;
    for(r=5; r>=1; r--)
    {
        for(c=1; c<=r; c++)
        {
            printf("%C",64+c);
        }
        printf("\n");
    }
}