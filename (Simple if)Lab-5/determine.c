#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2,r,i1,i2;
    printf("Equation in form of ax^2+bx+c\n");
    printf("Enter value of a:\n");
    scanf("%f", &a);
    printf("Enter value of b:\n");
    scanf("%f", &b);
    printf("Enter value of c:\n");
    scanf("%f", &c);
    
    d=(b*b)-(4*a*c);
    if(d>0)
    {
    r1=((-b)+sqrt(d))/(2*a);
    r2=((-b)-sqrt(d))/(2*a);
    printf("Roots of equation=%2.f,%2.f",r1,r2);
    }
    if(d<0)
    {
    i1=((-b)+sqrt(-d))/(2*a);
    i2=((-b)-sqrt(-d))/(2*a);
    printf("Imagnary roots are=%2.f,%2.f",i1,i2);
    }
    if(d=0)
    {
    printf("roots are equaction=%2.f",r);
    }
}
