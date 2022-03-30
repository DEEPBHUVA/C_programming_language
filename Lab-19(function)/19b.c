#include <stdio.h>
void csum(int);
void main()
{
    int n,sum=0;
    printf("Enter n numbers: ");
    scanf("%d", &n);
    csum(n);

}
void csum(int n)
{
    int sum=0,i=1;
    for(i=1; i <= n; i++)
    {
        sum= sum+i;
    }
    printf("Sum of first n numbers= %d",sum);
}
