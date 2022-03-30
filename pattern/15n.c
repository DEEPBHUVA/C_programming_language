#include <stdio.h>
void main()
{
    int i, j, n, z;
    printf("Enter n:");
    scanf("%d", &n);
    z = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= z; j++)
        {
            printf("%d ", z);
        }
        z--;
        printf("\n");
    }
}