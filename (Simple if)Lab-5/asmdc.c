#include<stdio.h>
void main()
{
float sub, add, div, multi, a, b, choice;
printf("Enter 1st number:");
scanf("%f", &a);
printf("Enter 2nd number:");
scanf("%f", &b);
printf("choice for addition=1\n");
printf("choice for substraction=2\n");
printf("choice for multiplication=3\n");
printf("choice for division=4\n");
printf("Enter your choice:");
scanf("%f", &choice);


if(choice==1)
{
    add=a+b;
    printf("addition of two numbers is %f",add);
}
if(choice==2)
{
    sub=a-b;
    printf("substraction of two numbers is %f",sub);
}
if(choice==3)
{
    multi=a*b;
    printf("multiplication of two numbers is %f",multi);
}
if(choice==4)
{
    div=a/b;
    printf("division of two numbers is %f",div);
}

}
