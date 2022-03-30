#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number(1-12)\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("days in month=31\n");
        break;
        case 2:
        printf("days in month=28-19\n");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("days in month=30\n");
        break;
        default:
        printf("Enter number is not velid\n");
    }
}