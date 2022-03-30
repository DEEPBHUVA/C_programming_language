#include<stdio.h>
int main()
{
    int a,i,max,min,sum=0,avg;

    printf("Enter total number of input numbers:\n");
    scanf("%d",&a);
    int number[a];
    for(i=0; i<a; i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&number[i]);
        sum=sum+number [i];
        min = number[0];
        max = number[0];
        if(number [i]>max)
            max = number[i];
        if(number [i]<min)
            min = number[i];
    }
    printf("Maximum Number are %d\n",max);
    printf("minimum number are %d\n",min);
    printf("\nSum of Numbers = %d", sum);
    printf("\navg of Numbers = %d", (sum/a));
}