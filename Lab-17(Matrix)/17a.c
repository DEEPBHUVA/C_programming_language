#include <stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter number of row:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    int row[r], col[c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d",&row[i],col[j] );
        }
    }

    for (i = 0; i < r; i++)
    {
        printf("|");
        for (j = 0; j < c; j++)
        {
            printf("%3d",row[i],col[j]);
        }
        printf("|");
        printf("\n\n");
    }
}