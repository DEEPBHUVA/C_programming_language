#include<stdio.h>
int main()
{
    int n,i,min,max,sum=0,avg;
    printf("Enter numbers:\n");
    scanf("%d",&n);
    int num[n];
    for(i=0; i<n; i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&num[i]);
    }
    min=num[0];
    max=num[0];
    for(i=0; i<n; i++)
    {
        if(num[i]>max)
            max=num[i];
        if(num[i]<min)
            min=num[i];
    }
    for(i=0; i<n; i++)
    {
        sum=sum+num[i];
    }
    printf("Maximum number: %d\nMinimum number: %d\nSum of number: %d\nAvg of number: %d\n"
           ,max,min,sum,sum/n);
}