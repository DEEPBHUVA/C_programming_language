#include<stdio.h>

int main()
{
    int r,c,n,p,q;
    printf("Enter n: ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        if (r % 2 == 0)
        {
            p = 1;
            q = 0;
        }
        else
        {
            p = 0;
            q = 1;
        }
        for (c = 1; c <= r; c++)
        {
            if (c % 2 == 0)
                printf("%d ", p);
            else
                printf("%d ", q);
        }
        printf("\n");
    }
}