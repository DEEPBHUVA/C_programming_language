#include <stdio.h>
#include <math.h>
void main()
{
    int x, i, j;
    float m = 1;
    float sum = 0;
    printf("Enter x: ");
    scanf("%d", &x);
    for (i = 1; i <= 9; i++)
    {
        m = 1;
        for (j = 1; j <= i; j++)
        {
            m *= j;
        }
        if (i % 2 == 0)
            sum += pow(x, i) / m;
        else
            sum -= pow(x, i) / m;
    }
    printf("\nsum = %.2f\n", 1 - sum);
}
