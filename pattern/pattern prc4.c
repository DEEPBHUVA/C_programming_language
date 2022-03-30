#include<stdio.h>

int main()
{
    int i,j;
    for(j=10; j>0; j--)
    {
        for(i=10; i>=j; i--)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}