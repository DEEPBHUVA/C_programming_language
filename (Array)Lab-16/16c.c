#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter numbers for reverse order:\n");
    scanf("%d",&a);
    int number[a];
    for(i=0; i<a; i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&number[i]);
    }
    for(i=a-1; i>=0; i--)
    {
        printf("\n%d", number[i]);
    }
}