#include<stdio.h>
int main()
{
    int a,i,pos=0,neg=0;
    printf("Enter total number of input numbers:\n");
    scanf("%d",&a);
    int number[a];
    for(i=0; i<a; i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&number[i]);
    }
    for(i=0; i<a; i++)
    {
        if(number[i]>=0)
            pos++;
        else
            neg++;
    }
    printf("Number of positive numbers are %d\n",pos);
    printf("Number of negative numbers are %d\n",neg);
}