#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number(1-12)\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("31 days in january\n");
        break;
        case 2:
        printf("28-29 days in february\n");
        break;
        case 3:
        printf("31 days in march\n");
        break;
        case 4:
        printf("30 days in april\n");
        break;
        case 5:
        printf("31 days in march\n");
        break;
        case 6:
        printf("30 days in june\n");
        case 7:
        printf("31 days in july\n");
        break;
        case 8:
        printf("31 days in august\n");
        break;
        case 9:
        printf("30 days in september\n");
        break;
        case 10:
        printf("31 days in october\n");
        break;
        case 11:
        printf("30 days in november\n");
        break;
        case 12:
        printf("31 days in december\n");
        break;
        default:
        printf("Enter number is not velid\n");
    }
}