#include<stdio.h>
int main()
{
    int a,i,e=0,o=0;
    printf("Enter total number of input numbers:\n");
    scanf("%d",&a);
    int number[a];
    for(i=0; i<a; i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&number[i]);
        if(number[i]%2==0)
            e=e+1;
        else
            o=o+1;
    }
    printf("Number of odd numbers are %d\n",o);
    printf("Number of even numbers are %d\n",e);
}